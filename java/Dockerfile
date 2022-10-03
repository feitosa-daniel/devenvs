FROM mambaorg/micromamba:latest

# Install dependencies 
COPY --chown=$MAMBA_USER:$MAMBA_USER env.yaml /tmp/env.yaml
RUN micromamba install -y -f /tmp/env.yaml && \
    micromamba clean --all --yes

# Config to find executables
ARG MAMBA_DOCKERFILE_ACTIVATE=1

# Bootstrap environment
WORKDIR /src
