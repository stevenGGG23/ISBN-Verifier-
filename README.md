### Description:

This program checks the validity of ISBN-13 numbers. ISBN (International Standard Book Number) is a unique identifier for books, and the ISBN-13 format is composed of 13 digits. The last digit of the ISBN is the "check digit," which is used to validate the number. The program reads ISBN numbers from a file, calculates the check digit, and compares it with the provided check digit. If they match, the ISBN is valid; otherwise, it is invalid.

The ISBN-13 validation is based on a checksum formula that considers the first 12 digits, applying a specific weight (1 for odd positions and 3 for even positions). The total sum is then used to determine the check digit. If the check digit matches the 13th digit, the ISBN is considered valid.

### Output Sample:

Given a file `isbn.dat` containing ISBN numbers, the output would look like this:

9780262026499 is not a valid ISBN number 9780321480798 is not a valid ISBN number 9780596514552 is not a valid ISBN number 9780596514556 is not a valid ISBN number 9780596529260 is not a valid ISBN number 9781596510510 is a valid ISBN number
