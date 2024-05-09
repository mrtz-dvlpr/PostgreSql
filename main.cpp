#include <QCoreApplication>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QSqlQueryModel>

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");

  db.setDatabaseName("mydb");

  db.setHostName("localhost");

  db.setUserName("postgres");

  db.setPassword("morteza12");

  if (db.open()) {

    qDebug() << "is open!";

  } else {

    qDebug() << "not open!";
  }

  QSqlQuery query(db);
  query.exec("select * from users");
  qDebug() << query.value(0).toInt();

  //  if (query.exec("select firstname "
  //                 "from class "
  //                 "where firstname like '_l_'")) {

  //    qDebug() << "query was done ";
  //    query.first();
  //    qDebug() << query.value(0).toString();
  //  } else {
  //    qDebug() << "query was not done";
  //  }
  return a.exec();
}
// line:14

//  query.exec("CREATE TABLE student (ID int PRIMARY KEY(ID),firstname
//  vchar(20),lastname vchar(20))");

//  query.exec("INSERT INTO class(ID,firstname,lastname,city,age) VALUES "
//             "(1,'morteza','dehini','tehran',21),(2,'','mohammadi','fars',20),("
//             "3,'ahmad','',"
//             "'shiraz',19)");

//  query.exec("SELECT firstname FROM class");

//  query.exec("delete from class where firstname='mohammad'");

//  query.exec("update class set firstname='', lastname='' where ID=6 ");

//  query.exec("select * from class order by ID desc ")

//  query.exec("select count(*) from class")
//  query.first();
//  query.value(0).toInt()
//  query.at();
//  query.seek(10,false);

//  query.exec("select firstname from class where firstname like '_o_____'");

//  while (query.next()) {
//    qDebug() << query.value(0).toString();
//  }
