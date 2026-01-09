## Progetto svolto autonomamente in quarta superiore (2021)

## Funzionamento
Realizzazione di un sistema di rilevamento a ultrasuoni basato su Arduino, composto da un sensore HC-SR04 e da un servomotore. Il sensore viene ruotato su un arco di 180° dal servomotore per effettuare una scansione dell’ambiente circostante.

Per ogni angolo di rotazione, il sistema misura la distanza degli ostacoli tramite il tempo di ritorno dell’eco ultrasonico e trasmette i dati (angolo e distanza) tramite comunicazione seriale. Il progetto permette la mappatura bidimensionale dell’ambiente ed è adatto a applicazioni di robotica, navigazione e rilevamento ostacoli.

## Matematica
Ottenuto il tempo di volo delle onde sonore, la distanza si calcola con: velocità * tempo/2,
- il tempo va diviso per due perchè le onde sono andate e tornate percorrendo due volte la distanza
- la velocità del suono è circa 343 m/s

- [![Video demo](https://img.youtube.com/vi/GunWbkuVzpA/0.jpg)](https://youtu.be/GunWbkuVzpA)
