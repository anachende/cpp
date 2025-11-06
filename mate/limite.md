# 1. Suma dată este $s_n = \sum_{k=1}^n \frac{1}{n+k}$.
Aceasta se rescrie ca $s_n = \sum_{k=n+1}^{2n} \frac{1}{k}$, care reprezintă suma armonată parțială $H_{2n} - H_n$, unde $H_m = \sum_{j=1}^m \frac{1}{j}$ este al $m$-lea număr armonic.
Știm că $H_m = \ln m + \gamma + o(1)$ când $m \to \infty$, cu $\gamma$ constanta Euler-Mascheroni.
Astfel,
$s_n = H_{2n} - H_n = (\ln(2n) + \gamma + o(1)) - (\ln n + \gamma + o(1)) = \ln 2 + \ln n - \ln n + o(1) = \ln 2 + o(1).$
## Prin urmare, $\lim_{n \to \infty} s_n = \ln 2$.
