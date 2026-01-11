FROM mcr.microsoft.com/devcontainers/base:noble

USER vscode
WORKDIR /home/vscode

RUN curl https://raw.githubusercontent.com/leanprover/elan/master/elan-init.sh -sSf | sh -s -- -y --default-toolchain none

ENV PATH="/home/vscode/.elan/bin:${PATH}"
