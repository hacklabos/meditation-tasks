### Zadatak
Pomozi našem gimnastičaru poboljšati rezultate do sljedećeg ljeta!
Upotrebom složene analize nutricionisti su dobili jedinstvene brojeve koji opisuju dijetu: C grama ugljikohidrata, F grama masti i P grama proteina. Sve više je previše.
Napišite aplikaciju koja će gimnastičaru pomoći sastaviti idealni program prehrane.

Program zadovoljava dijetu ukoliko sadrži dovoljno ugljikohidrata, masti i proteina. Svaki gram više od traženog čini višak, zajedno sa masom ostalog u hrani. Idealni program je onaj koji sadrži najmanje viška.

### Problem
Vaš program treba ispisati imena hrane i količinu koja čine idealni program.

**Napomena**: Ukoliko ne postoji rješenje, ispišite “**ERROR**”. Ukoliko postoji više rješenja, ispišite bilo koje.

### Ulaz
U prvoj liniji učitava se 3 broja odvojena razmakom: minimalno potrebna masa ugljikohidrata, masti i proteina.
Druga linija učitava broj različite hrane koji je gimnastičaru dostupan.
U svakoj sljedećoj liniji učitavaju se informacije o hrani: Ime hrane (jedna riječ), broj grama ugljikohidrata, broj grama masti, broj grama proteina i broj grama ostalog u jedinici hrane.
Gimnastičaru je na raspolaganju neograničen broj jedinice sve hrane.

### Izlaz
Imena hrane i količina koja čine idealni program.
## Primjer

#### Ulaz
```
3 5 13
3
Banana 1 0 0 1
Jabuka 0 1 2 0
Riba 0 0 1 4
```

#### Izlaz
```
Banana 3
Jabuka 5
Riba 3
```
