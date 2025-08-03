# Functions
Common functions are shown below.

## Factorial
$$
n! = \prod^n_{x = 1}{x} = 1 \cdot 2 \cdot 3 \cdot \ldots \cdot n
$$

Recursively:
$$
\begin{align*}
0! &= 1 \\
n! &= n \cdot (n - 1)!
\end{align*}
$$

## Fibonacci Numbers
Appears relatively often.

Recursively defined as:
$$
\begin{align*}
f(0) &= 0 \\
f(1) &= 1 \\
f(n) &= f(n - 1) + f(n - 2)
\end{align*}
$$

The first few numbers:
$$
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, \ldots
$$

Closed form formula, as defined in **Binet's formula**:
$$
f(n) = \frac{(1 + \sqrt{5})^n - (1 - \sqrt{5})^n}{2^n \sqrt{5}}
$$