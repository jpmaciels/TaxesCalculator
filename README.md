# TaxesCalculator
University CS programming exercise in C Language - 1st project of "Programming Fundamentals" of UTFPR

# Exercise:
Every beginning of the month it is time for the income tax return in the Democratic Republic of Leyzistan, a Eastern European absolutist dictatorship. Economy Minister Bogdan Baldowzky decided that each citizen must report monthly their earnings in the previous month (in local currency), in a letter filed in 3 copies, with notarized signature. The article of the tax payable in the month is based on tables that are readjusted annually. The table for this year is the following:
| Aliquot | Income (January to April) | Income (May to August) | Income (September to December) |
| --- | --- | --- | --- |
| 0 | up to 1.200,25 | up to 1.500,00 | up to 1.875,00 |
| 7,5% | from 1.200.26 to 2.300,50 | from 1.500,01 to 2.800,25 | from 1.875,01 to 3.400,50 |
| 15,0% | from 2.300,51 to 3.500,75 | from 2.800,26 to 3.500,50 | from 3.400,51 to 3.900,25 |
| 22,5% | from 3.500,76 to 4.000,00 | from 3.500,51 to 4.300,75 | from 3.900,26 to 4.600,25 |
| 27,5% | above 4.000,00 | above 4.300,75 | above 4.600,25 |

The tax is calculated in such a way that the rate is not levied on the total income, but only on the parcel that is in a certain range. In this way, a citizen with income of UT₣ 1,200.25 in January is exempt from paying the tax, but a citizen with an income of UT₣ 1,201.25 is not will have to pay UT₣ 90.09 in tax, but only UT₣ 0.08 (rounding the amounts to 2 places decimals). The table below presents other examples:

| Income | Tax (January to April) | Tax (May to August) | Tax (September to December) |
| --- | --- | --- | --- |
| 5.000,00 | 649,89 | 574,91 | 456,81 |
| 3.800,50 | 330,00 | 270,06 | 174,41 |
| 2.500,20 | 112,47 | 75,01 | 46,89 |
| 2.000,11 | 59,99 | 37,51 | 9,38 |
| 1.500,13 | 22,49 | 0,01 | 0 |

You must implement a program that takes as input, through the `scanf` function, a number in the interval [1,12] indicating the month and a value indicating the monthly income of a citizen (in that order!), and shows in the output, through the `printf` function, a single number, corresponding to the tax amount due, rounded to 2 decimal places. The program must not display any other messages, or that is, all it should display is the output value. Assume that all entries are valid.

Note: This problem could have a more elegant solution with the use of repetitions and vectors, but for now you MUST NOT use these features!

# Solution
Instead of using 4 auxiliary variables of partial tax (which had passed in my head at first) I decided to use the same variable tax, and add to it the value calculated for that interval. So I can not make an account, which I would have to do before, for each value range and decrease the number of variables. Since a variable only for partial values ​​could not be useful on its own, on account of its own reason for existence.

After selecting the correct month, to make your calculations through nested `if`. I'll test with the largest range first, because if it belongs to it, it will be assigned the due tax amount, if it is not part, it will go to the next `if`. In at first I thought that nested `if` would work, but I realized that it didn't make sense. This method makes good use of the sequential character of our programming, as the total tax amount is developed according to the sequence of commands.

Tax is a simple calculation that takes the amount that does not fall into the range and calculates the percentage assigned to this range. The yield is set to the value that would not enter this higher rate - as it was previously subtracted for the tax calculation - and arrives at the next `if` as a valid condition value.

The above reasoning is repeated in every month with the appropriate values set. Until it reaches the interval where the tax is 0%. Interesting is that if the income was in this range, the calculated tax would be direct 0, because in the variable declaration, we set it to 0. When assigning tax to tax (`tax=tax;`) it remains zero.
