#ifndef QTIPCSERVER_H
#define QTIPCSERVER_H

// Define cydercoin-qt message queue name
#define BITCOINURI_QUEUE_NAME "cydercoinURI"

void ipcScanRelay(int argc, char *argv[]);
void ipcInit(int argc, char *argv[]);

#endif // QTIPCSERVER_H
