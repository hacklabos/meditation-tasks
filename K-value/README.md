### Zadatak
Zadan je niz od N cijelih brojeva poredanih u krug.
Postoji N načina za izabrati uzastopne pod-nizeve brojeva duljine M. Za svaki pod-niz možemo naći K-vrijednost tog podniza. “K” vrijednost je K-ti najmanji broj svakoga pod-nizu.

### Problem
Pronaći najmanju moguću “K” vrijednost  od svih “K” vrijednosti podnizova.
1 < N <= 100000
1 <= M < N
1 <= K <= M
0 <= broj iz niza <= 2^31

### Ulaz
Prva linija sadrži brojeve N, M i K odvojenih razmakom.
Druga linija sadrži listu sačinjenu od N brojeva odvojenih razmakom.
Brojevi u listi spajaju se tako da lista čini brojeve u krugu.

### Izlaz
Cijeli broj jednak najmanjoj mogućoj “K” vrijednosti.

## Primjer
#### Ulaz
```
5 3 2
1 5 3 4 2
```


#### Izlaz
```
2
```


### Objašnjenje

```
Drugi najmanji broj podniza 1, 5, 3 je 3.
Drugi najmanji broj podniza 5, 3, 4 je 4.
Drugi najmanji broj podniza 3, 4, 2 je 3.
Drugi najmanji broj podniza 4, 2, 1 je 2.
Drugi najmanji broj podniza 2, 1, 5 je 2.
Najmanja K-vrijednost je 2.
```
