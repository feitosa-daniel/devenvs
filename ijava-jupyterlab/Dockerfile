FROM mambaorg/micromamba:latest

# Install IJava dependencies 
COPY --chown=$MAMBA_USER:$MAMBA_USER env.yaml /tmp/env.yaml
RUN micromamba install -y -f /tmp/env.yaml && \
    micromamba clean --all --yes

# Config to find executables
ARG MAMBA_DOCKERFILE_ACTIVATE=1

# Set up jupyterlab
RUN jupyter lab build

# Install IJava kernel
WORKDIR /tmp
RUN wget https://github.com/SpencerPark/IJava/releases/download/v1.3.0/ijava-1.3.0.zip
RUN unzip ijava-1.3.0.zip
RUN python3 install.py --sys-prefix
RUN rm -rf *

# Bootstrap environment
WORKDIR /notebooks
EXPOSE 8888

CMD ["jupyter", "lab", "--ip=*", "--port=8888", "--no-browser", "--allow-root", "--LabApp.token=''"]
