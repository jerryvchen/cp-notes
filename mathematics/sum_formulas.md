# Sum Formulas
All sums of the form

$$
\sum^{n}_{x = 1}{x^k} = 1^k + 2^k + 3^k + \dots + n^k
$$

with $k > 0$ has a closed form solution with degree $k + 1$. 

For $k = 1$,
$$
\sum^{n}_{x = 1}{x} = 1 + 2 + 3 + \dots + n = \frac{n(n + 1)}{2}
$$

and for $k = 2$,
$$
\sum^{n}_{x = 1}{x^2} = 1^2 + 2^2 + 3^2 + \dots + n^2 = \frac{n(n + 1)(2n + 1)}{6}
$$

A general form can be given by **Faulhaber's formula**. 


## Arithmetic Progression
A **arithmetic progression** is defined as a sequence of numbers where the difference between any 2 numbers is constant, such as,
$$
3, 7, 11, 15
$$
is a sequence with a constant of 4. 

The sum can be calculated as:
$$
\underbrace{a + \dots + b}_{n \text{ numbers}} = \frac{n (a + b)}{2}
$$

As an informal proof, the value of each number contributes $(a + b) / 2$ to the sum. 

## Geometric Progression
Similar to the idea of an arithmetic progression, a **geometric progression** is defined such that the ratio between any 2 numbers is constant, such as,
$$
3, 6, 12, 24
$$

The sum of such progression can be calculated with a ratio $k$:
$$
S = a + ak + ak^2 + \dots + b = \frac{bk - a}{k - 1}
$$

As an exercise, you an prove this by defining $S$, $kS$, and solving for $kS - S$.

A common/special case of a geometric progression is shown below:
$$
1 + 2 + 4 + 8 + \dots + 2^{n - 1} = 2^n - 1
$$

## Harmonic Sum
The harmonic sum has the form,
$$
\sum^n_{x = 1}{\frac{1}{x}} = 1 + \frac{1}{2} + \frac{1}{3} + \dots + \frac{1}{n}
$$
It is known to diverge. 

However, the upper bound to the sum is $\log_2{(n)} + 1$

Informally, we can prove this by modifying each term $1 / k$ such that $k$ becomes the nearest power of 2 that is $\le k$. For example, when we set $n = 6$:
$$
1 + \frac{1}{2} + \frac{1}{3} + \frac{1}{4} + \frac{1}{5} + \frac{1}{6} \le 1 + \frac{1}{2} + \frac{1}{2} + \frac{1}{4} + \frac{1}{4} + \frac{1}{4}
$$
There will be then $\log_2{(n)} + 1$ parts, as there is $(1, 2 \cdot 1/2, 4 \cdot 1/4, \text{etc.})$
