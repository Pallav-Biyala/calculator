FROM ubuntu:latest

RUN apt-get update
RUN apt-get install -y build-essential

WORKDIR /app

COPY calculator.cpp mathfuncs.cpp mathfuncs.h ./

RUN g++ calculator.cpp mathfuncs.cpp -o calculator

ENTRYPOINT ["./calculator"]
