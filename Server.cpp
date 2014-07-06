//#include "server.h"
//
//static inline qint32 ArrayToInt(QByteArray source);
//
//Server::Server(QObject *parent) : QObject(parent)
//{
//	server = new QTcpServer(this);
//	connect(server, SIGNAL(newConnection()), SLOT(newConnection()));
//
//	if (server->listen(QHostAddress("127.0.0.1"), 9871))
//	{
//		qDebug() << "ERROR: tried to listen, but it failed";
//		return;
//	}
//	else if (server->isListening())
//	{
//		qDebug() << "Server is running on" << "127.0.0.1" << "port: " << 9871;
//	}
//
//	
//}
//
//void Server::newConnection()
//{
//	while (server->hasPendingConnections())
//	{
//		QTcpSocket *socket = server->nextPendingConnection();
//		connect(socket, SIGNAL(readyRead()), SLOT(readyRead()));
//		connect(socket, SIGNAL(disconnected()), SLOT(disconnected()));
//		QByteArray *buffer = new QByteArray();
//		qint32 *s = new qint32(0);
//		buffers.insert(socket, buffer);
//		sizes.insert(socket, s);
//	}
//}
//
//void Server::disconnected()
//{
//	QTcpSocket *socket = static_cast<QTcpSocket*>(sender());
//	QByteArray *buffer = buffers.value(socket);
//	qint32 *s = sizes.value(socket);
//	socket->deleteLater();
//	delete buffer;
//	delete s;
//}