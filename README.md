# Calculate-SquareRoot-without-sqrt

The simple idea is, the square root of a non-negative number x can be calculated using the recursive relation :

<img src="http://latex.codecogs.com/gif.latex?a_{n+1}=\frac{a_n+\frac{x}{a_n}}{2}."/>

The limit of {a_n} (say A) satisfies A = (A + x/A) / 2, or A = sqrt(x).

