# exp-2
# Weather Modeling Using Quadratic Equation — Waterfall Model

## Overview
This project implements weather modeling using the quadratic equation:

T(t) = a·t² + b·t + c

The Waterfall model approach was followed, with clearly defined sequential phases:
1. Requirements Gathering
2. System Design
3. Implementation (S1–S4 stages)
4. Verification & Validation
5. Maintenance

## Stages
- **S1:** Hardcoded coefficients and time steps.
- **S2:** User input via keyboard with validation.
- **S3:** Read parameters from a single input file.
- **S4:** Batch processing from CSV file and output to CSV.

## How to Compile
```bash
gcc s1_hardcoded.c -o s1 -lm
./s1

