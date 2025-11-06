# 1. Suma dată este $s_n = \sum_{k=1}^n \frac{1}{n+k}$.

Aceasta se rescrie ca $s_n = \sum_{k=n+1}^{2n} \frac{1}{k}$, 

care reprezintă suma armonată parțială $H_{2n} - H_n$, 

unde $H_m = \sum_{j=1}^m \frac{1}{j}$ este al $m$-lea număr armonic.

Știm că $H_m = \ln m + \gamma + o(1)$ când $m \to \infty$, cu $\gamma$ constanta Euler-Mascheroni.

Astfel,

$s_n = H_{2n} - H_n = (\ln(2n) + \gamma + o(1)) - (\ln n + \gamma + o(1)) = \ln 2 + \ln n - \ln n + o(1) = \ln 2 + o(1).$

## Prin urmare, $\lim_{n \to \infty} s_n = \ln 2$.


---
# 2. Să calculăm limita:
# $\lim_{n \to \infty} n \left( 5^{1/n} - 3^{1/n} \right).$

## Pasul 1: Observație preliminară
Știm că, pentru orice $a > 0$,
$\lim_{n \to \infty} a^{1/n} = 1.$
Deci atât $5^{1/n} \to 1$, cât și $3^{1/n} \to 1$, deci diferența $5^{1/n} - 3^{1/n} \to 0$.
Înmulțim cu $n \to \infty$, deci avem o formă nedeterminată $\infty \cdot 0$.

## Pasul 2: Rescriere folosind exponențiale
Fie $a_n = 5^{1/n}$, $b_n = 3^{1/n}$. Atunci:
$a_n = e^{\frac{\ln 5}{n}}, \quad b_n = e^{\frac{\ln 3}{n}}.$

Folosim dezvoltarea Taylor a exponențialei în jurul lui 0:
$e^x = 1 + x + \frac{x^2}{2!} + \frac{x^3}{3!} + \cdots$

Pentru $x$ mic (adică $n$ mare):

$5^{1/n} = 1 + \frac{\ln 5}{n} + O\left(\frac{1}{n^2}\right),$

$3^{1/n} = 1 + \frac{\ln 3}{n} + O\left(\frac{1}{n^2}\right).$

## Pasul 3: Diferența
$5^{1/n} - 3^{1/n} = \left(1 + \frac{\ln 5}{n} + O\left(\frac{1}{n^2}\right)\right) - \left(1 + \frac{\ln 3}{n} + O\left(\frac{1}{n^2}\right)\right) = \frac{\ln 5 - \ln 3}{n} + O\left(\frac{1}{n^2}\right) = \frac{\ln \frac{5}{3}}{n} + O\left(\frac{1}{n^2}\right).$

## Pasul 4: Înmulțim cu $n$
$n \left( 5^{1/n} - 3^{1/n} \right) = n \left( \frac{\ln \frac{5}{3}}{n} + O\left(\frac{1}{n^2}\right) \right) = \ln \frac{5}{3} + O\left(\frac{1}{n}\right).$

## Pasul 5: Limita
Când $n \to \infty$, $O\left(\frac{1}{n}\right) \to 0$, 
deci:

### $\lim_{n \to \infty} n \left( 5^{1/n} - 3^{1/n} \right) = \ln \frac{5}{3}.$

Răspuns final:
$\boxed{\ln \dfrac{5}{3}}$

----
### Caz general: $\lim_{n \to \infty} n \left( a^{1/n} - b^{1/n} \right)$, unde $a > b > 0$
Folosim aceeași metodă ca în cazul particular $a = 5$, $b = 3$.

#### Pasul 1: Dezvoltare asimptotică

$a^{1/n} = e^{\frac{\ln a}{n}} = 1 + \frac{\ln a}{n} + O\left(\frac{1}{n^2}\right),$

$b^{1/n} = e^{\frac{\ln b}{n}} = 1 + \frac{\ln b}{n} + O\left(\frac{1}{n^2}\right).$

#### Pasul 2: Diferența
$a^{1/n} - b^{1/n} = \frac{\ln a - \ln b}{n} + O\left(\frac{1}{n^2}\right) = \frac{\ln \frac{a}{b}}{n} + O\left(\frac{1}{n^2}\right).$

#### Pasul 3: Înmulțire cu $n$
$n \left( a^{1/n} - b^{1/n} \right) = \ln \frac{a}{b} + O\left(\frac{1}{n}\right).$

#### bPasul 4: Limita
$\lim_{n \to \infty} n \left( a^{1/n} - b^{1/n} \right) = \ln \frac{a}{b}.$

#### Răspuns general:

$\boxed{\ln \dfrac{a}{b}}$

(valabil pentru $a > b > 0$; dacă $a = b$, limita este 0; dacă $a < b$, rezultatul este negativ, dar formula rămâne validă).

---
# 3. Suma dată este: $s_n = \sum_{k=1}^n \frac{1}{n^2 + k}.$

Observăm că:

$n^2 + 1 \leq n^2 + k \leq n^2 + n, \quad \forall k = \overline{1,n}.$

Prin urmare:

$\frac{1}{n^2 + n} \leq \frac{1}{n^2 + k} \leq \frac{1}{n^2 + 1}, \quad \forall k = \overline{1,n}.$

Înmulțim cu $n$ (numărul de termeni) și obținem inegalități pentru sumă:

$n \cdot \frac{1}{n^2 + n} \leq s_n \leq n \cdot \frac{1}{n^2 + 1}.$

Simplificăm:

Partea stângă: $\frac{n}{n^2 + n} = \frac{n}{n(n + 1)} = \frac{1}{n + 1}$,

Partea dreaptă: $\frac{n}{n^2 + 1}$.

Astfel:
$\frac{1}{n + 1} \leq s_n \leq \frac{n}{n^2 + 1}.$

Când $n \to \infty$:

$\frac{1}{n + 1} \to 0$,

$\frac{n}{n^2 + 1} = \frac{1}{n + \frac{1}{n}} \to 0$.

Prin teorema strângerii (sandwich theorem), rezultă:

$\lim_{n \to \infty} s_n = 0.$

--- 
# 4. Calculul limitei: $\lim_{n \to \infty} \sum_{k=1}^n \frac{n}{n^2 + k}$

Rezolvare cu inegalitati - teorema clestelui (strângeri)

Pentru $k = 1, \dots, n$:

$n^2 + 1 \leq n^2 + k \leq n^2 + n \quad \Rightarrow \quad \frac{n}{n^2 + n} \leq \frac{n}{n^2 + k} \leq \frac{n}{n^2 + 1}.$

Sumăm:

$n \cdot \frac{n}{n^2 + n} \leq s_n \leq n \cdot \frac{n}{n^2 + 1} \quad \Rightarrow \quad \frac{n^2}{n^2 + n} \leq s_n \leq \frac{n^2}{n^2 + 1}.$
Simplificăm:

$\frac{n^2}{n^2 + n} = \frac{1}{1 + \frac{1}{n}} \to 1$,

$\frac{n^2}{n^2 + 1} = \frac{1}{1 + \frac{1}{n^2}} \to 1$.

Eroare! Am greșit în inegalități.

Corectăm:

$\frac{n}{n^2 + n} \leq \frac{n}{n^2 + k} \leq \frac{n}{n^2 + 1},$

dar suma are $n$ termeni, deci:

Adică:
$\frac{n^2}{n^2 + n} \leq s_n \leq \frac{n^2}{n^2 + 1}.$
Acum:

$\frac{n^2}{n^2 + n} = \frac{1}{1 + \frac{1}{n}} \to 1$,
$\frac{n^2}{n^2 + 1} \to 1$.

Deci prin teorema strângerii:
$\lim_{n \to \infty} s_n = 1.$



---
# 5. Calculul limitei: $\lim_{n \to \infty} \sum_{k=1}^n \frac{(2k - 1)^2}{n^3 + (2k - 1)^2}$

Pasul 6: Justificare riguroasă (teorema strângerii)

Fie $\varepsilon_k = \frac{(2k-1)^2}{n^3}$. Atunci:

$\frac{(2k-1)^2}{n^3 + (2k-1)^2} = \frac{1}{n^3} \cdot \frac{(2k-1)^2}{1 + \varepsilon_k}.$

Deoarece $\varepsilon_k \leq \frac{4n^2}{n^3} = \frac{4}{n} \to 0$ uniform în $k$,

$1 \leq \frac{1}{1 + \varepsilon_k} \leq 1 + 2\varepsilon_k \quad \text{(pentru } n \text{ mare)}.$

Atunci:

$\frac{1}{n^3} \sum_{k=1}^n (2k-1)^2 \leq s_n \leq \frac{1}{n^3} \sum_{k=1}^n (2k-1)^2 \cdot (1 + 2\varepsilon_k).$

Dar $\sum \varepsilon_k (2k-1)^2 = O(n^2) \cdot n = O(n^3)$, deci contribuția este $O(1/n) \to 0$.

Deci $s_n$ este asimptotic echivalentă cu $\frac{1}{n^3} \sum (2k-1)^2 \to \frac{4}{3}$.

Răspuns final:
$\boxed{\dfrac{4}{3}}$
