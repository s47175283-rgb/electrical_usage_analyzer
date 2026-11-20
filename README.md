# Electricity Usage Analyzer – C Project (TRL-4)

## Project Level
**Innovation Project – 4-4: Complete**

This repository contains a complete working prototype of an Electricity Usage Analyzer developed in C. The project includes the source code, documentation, sample test data, report, and a demonstration guide.

## Problem
Electricity consumers often need a simple way to understand monthly consumption and estimated electricity cost. Raw unit readings do not immediately show which month had the highest consumption or the overall yearly pattern.

## Solution
The Electricity Usage Analyzer accepts monthly electricity-unit readings and produces:
- monthly estimated bill
- total annual consumption
- average monthly consumption
- total and average bill
- highest and lowest consumption month
- simple usage status

## Technology
- Language: C
- Compiler: GCC / MinGW / Clang
- Concepts: structures, arrays, functions, loops, conditional statements and formatted output

## How to Run

### Linux / macOS
```bash
gcc src/electricity_usage_analyzer.c -o electricity_analyzer
./electricity_analyzer
```

### Windows (MinGW)
```bash
gcc src/electricity_usage_analyzer.c -o electricity_analyzer.exe
electricity_analyzer.exe
```

## Sample Input
```text
12
Jan
120
Feb
145
Mar
180
Apr
220
May
350
Jun
420
Jul
390
Aug
310
Sep
280
Oct
240
Nov
170
Dec
130
```

## Important Note
The bill calculation uses **illustrative slab rates for an academic prototype**. It is not an official Tamil Nadu Electricity Board billing calculator. Official tariff rates should be inserted from the applicable current tariff order before real-world use.

## Project Structure
```text
Electricity-Usage-Analyzer-TRL4/
├── src/
│   └── electricity_usage_analyzer.c
├── data/
│   └── sample_usage.csv
├── docs/
│   ├── project_report.md
│   └── demo_script.md
├── README.md
└── LICENSE
```

## TRL-4 Evidence
The prototype is implemented and runnable in a controlled environment. It demonstrates the core workflow:
**input → processing → bill estimation → analysis → report**.

## Future Enhancement
- CSV file import/export
- graphical charts
- appliance-level analysis
- actual tariff database
- SQLite storage
- mobile/web interface
