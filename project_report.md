# Electricity Usage Analyzer – Project Report

## 1. Title
Electricity Usage Analyzer using C

## 2. Objective
To develop a working software prototype that analyzes monthly electricity consumption and estimates the corresponding bill using predefined slab rates.

## 3. Problem Statement
Users may have monthly electricity-unit readings but lack a simple tool to summarize consumption, compare months and identify high-usage periods.

## 4. Proposed Solution
The system accepts monthly unit readings. A billing function applies predefined slabs. The program then calculates total usage, average usage, total bill, average bill and highest/lowest usage months.

## 5. System Flow
Input monthly units
→ validate input
→ calculate estimated bill
→ store monthly record
→ generate monthly report
→ calculate yearly statistics
→ classify usage

## 6. Modules
1. Input module
2. Validation module
3. Bill calculation module
4. Monthly report module
5. Summary analysis module
6. Usage classification module

## 7. C Concepts Used
- `struct`
- arrays
- functions
- loops
- `if-else`
- formatted input/output
- basic validation

## 8. Test Case
Input: 120 units

Expected calculation:
First 100 units × Rs.1.50 = Rs.150
Remaining 20 units × Rs.2.50 = Rs.50
Estimated bill = Rs.200

## 9. Result
The prototype successfully accepts monthly consumption data and generates a consolidated consumption and estimated billing report.

## 10. TRL-4 Completion Evidence
- Full working C prototype
- Source code uploaded to GitHub
- README documentation
- Project report
- Sample test data
- Demonstration procedure
- Repeatable compilation and execution steps

## 11. Limitations
The slab values are illustrative for an academic prototype. They should not be used as an official electricity bill calculator.

## 12. Future Scope
The system can be extended with CSV import/export, graphical visualization, database storage and current official tariff configuration.

## 13. Conclusion
The Electricity Usage Analyzer demonstrates how C programming can be used to build a practical data-analysis prototype. The project is suitable for a first-year engineering innovation portfolio and can be demonstrated as a working TRL-4 prototype.
