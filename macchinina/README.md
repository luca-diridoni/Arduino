## Descrizione
Questo progetto realizza una macchinina a due ruote motrici controllata da Arduino.
Il controllo avviene tramite Serial Monitor del PC, inviando singoli caratteri (w, a, s, d, x) tramite connessione USB.
Arduino comunica con un driver per motori DC (H-bridge), che permette:
- l’inversione del senso di rotazione dei motori
- il controllo della velocità tramite PWM.
All’accensione Arduino inizializza i pin e la comunicazione seriale.
Il movimento viene aggiornato solo quando viene ricevuto un comando dal PC.

## Collegamenti principali
- enA, enB: pin PWM per regolare la velocità dei motori (sinistra e destra)
- in1, in2: controllo direzione motore sinistro
- in3, in4: controllo direzione motore destro
Il GND di Arduino, driver e batteria deve essere comune.

## Logica di funzionamento
Ogni movimento è gestito da una funzione dedicata:
- avanti() → tutti i motori girano in avanti
- indietro() → tutti i motori girano all’indietro
- sinistra() → motori di sinistra indietro, quelli di destra avanti
- destra() → motori di destra indietro, quelli di sinistra avanti
- fermo() → tutti i motori disattivati
La velocità viene controllata con analogWrite() (PWM).
Durante le sterzate viene usata una velocità maggiore (250) per compensare il tempo necessario alla rotazione.
