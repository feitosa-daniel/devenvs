FROM python:3.10-slim-bullseye

WORKDIR /src

RUN apt-get update && apt-get upgrade -y
RUN python -m pip install --upgrade pip

# Install poetry
RUN apt-get install -y curl
RUN curl -sSL https://install.python-poetry.org | python3 -
ENV PATH /root/.local/bin:$PATH

# Export (development) requirements.txt
COPY pyproject.toml pyproject.toml
RUN poetry export --dev -f requirements.txt --output requirements.txt
# RUN poetry export -f requirements.txt --output requirements.txt

# Install requirements
# RUN apt-get install -y build-essential
# RUN apt-get install -y git
# RUN libmupdf-dev python3-fitz libfreetype-dev
RUN pip install --no-cache-dir -r requirements.txt
