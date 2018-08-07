#include "mainwindow.h"


QString MainWindow::labelInformationText(int number, bool boolVec)
{

    if(boolVec == false && number == -1)
        return "Я счастлив по умолчанию. Пожалуйста, не лезьте в настройки!...";
    // Знаешь как заинтриговать? Как? Завтра скажу.

    if(boolVec == false && number == 0)
        return "Существует лишь то, что можно измерить.";
    if(boolVec == false && number == 1)
        return "1 есть путь — путь истины, все остальное — не пути.";
    if(boolVec == false && number == 2)
        return "Науки делятся на 2 группы — на физику и собирание марок. Эрнест Резерфорд";
    if(boolVec == false && number == 3)
        return qrand() % 2 ? "3 веселых буквы." : "3 волоса и все густые.";
    if(boolVec == false && number == 4)
        return "Настоящий друг — это человек, которому можно позвонить в 4 часа утра.";
    if(boolVec == false && number == 5)
        return qrand() % 2 ? "В истощенную землю хоть 5 раз сей, хлеба-еды не получишь." : "Держи 5";
    if(boolVec == false && number == 6)
        return "Будущее приближается к нам со скоростью 6-десят минут в час.";
    if(boolVec == false && number == 7)
        return "7 деревень, а лошадка одна.";
    if(boolVec == false && number == 8)
        return qrand() % 2 ?  "Всем по семь, а мне - 8." : "8 пудов до обеда весит.";
    if(boolVec == false && number == 9)
        return "9 человек - все равно что десяток.";
    if(boolVec == false && number == 111)
        return "* Этому числу сложно найти применения в реальном мире.";


    QVector <QString> vecStr =
    {
/*10*/  "Число пальцев на двух руках.",
        "Примерно половина числа всех государств на Земле.",
        "Здание на 2,5 тысячи километров в высоту (если такое построить) имело бы миллион этажей.",
        "Джереми Харпер считал до миллиона три месяца,транслируя свой счетный марафон в Интернет.",
        "Головной мозг человека состоит из 100 миллиардов нейронов.",
        "Через триллион лет в галактиках прекратят образовываться новые звезды.",
        "На нашей планете живет примерно квадриллион муравьев.",
        "Для того чтобы вычерпать все мировые океаны, достаточно 5-6 квинтиллионов стаканов.",
        "За один вдох мы захватываем около 10 секстиллионов молекул.",
        "10 септиллионов молекул воды поместится в одном стакане. ",
        "Если взять 5-10 октиллионов атомов, то из них можно составить человеческое тело.",
        "В 1 килограмме вещества примерно 1 нониллион электронов. ",
        "* информации нет",
        "* информации нет",
        "* информации нет",
        "Количество молекул воздуха на Земле – 10<sup>44</sup>.",
        "* информации нет",
        "Количество атомов, составляющих всю нашу <br />планету, – 10<sup>50</sup>.",
        "* информации нет",
        "* информации нет",
        "Масса всей Вселенной – 1.7 * 10<sup>58</sup> килограмм.",
        "* информации нет",
        "* информации нет",
        "10<sup>66</sup> степени лет – время испарения черной <br />дыры с массой Солнца.",
        "* информации нет",
        "* информации нет",
        "* информации нет",
        "Число атомов во всей Вселенной – 10<sup>77</sup>.",
        "Число элементарных частиц во Вселенной – 10<sup>80</sup>.",
        "* информации нет",
        "* информации нет",
        "Число фотонов во Вселенной - 10<sup>90</sup>.",
        "* информации нет",
        "* информации нет",
        "Количество неповторяющихся шахматных партий <br />(Число Шеннона) равно минимум 10<sup>118</sup>." // гугол
    };

    if(boolVec == true){
        return vecStr[number];
    }


    return "";
}

