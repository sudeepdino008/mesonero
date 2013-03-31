#include "databasemanager.h"

DatabaseManager::DatabaseManager()
{

   db = QSqlDatabase::addDatabase("QSQLITE");
   db.setDatabaseName("MESONERO.db");
   db.setHostName("localhost");
   qDebug()<<"opened";

}

DatabaseManager* DatabaseManager::_instance = 0;

DatabaseManager* DatabaseManager::Instance()
{
   if(_instance==0)
       _instance = new DatabaseManager();
   return _instance;
}
