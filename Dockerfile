
FROM phusion/baseimage:0.9.22
MAINTAINER Manuel Navarro Catalan "manosnavarro@gmail.com"


# Use baseimage-docker's init system.
CMD ["/sbin/my_init"]

ARG DEBIAN_FRONTEND=noninteractive
USER root

RUN add-apt-repository 'deb http://build.openmodelica.org/apt xenial stable'
RUN curl -s http://build.openmodelica.org/apt/openmodelica.asc | apt-key add -

# Install python, omc
RUN apt-get update --fix-missing && apt-get upgrade -y -o Dpkg::Options::="--force-confold" && apt-get install -y \
    python-pip \
    python-dev \
    build-essential \
    python-numpy \
    omc \
    omlib-modelica-3.2.2
RUN pip install --upgrade pip

#RUN pip install gitpython

# Install OMPython
RUN python -m pip install -U https://github.com/OpenModelica/OMPython/archive/master.zip

# Clean up APT when done.
RUN rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

# Add User
RUN useradd -m -s /bin/bash manuelnvro
RUN chown -R manuelnvro:manuelnvro /home/manuelnvro


COPY ./CI /home/manuelnvro
COPY ./OpenIPSL /home/manuelnvro/OpenIPSL/OpenIPSL

USER manuelnvro
ENV USER manuelnvro
WORKDIR /home/manuelnvro