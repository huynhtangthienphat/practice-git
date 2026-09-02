FROM gcc:latest AS builder

WORKDIR /app

COPY main.cpp .

RUN g++ -std=c++11 -O2 -o app main.cpp


FROM ubuntu:24.04

WORKDIR /app

COPY --from=builder /app/app .

CMD ["./app"]
