#include "stylesheet.h"

stylesheet::stylesheet()
{
    label="QLabel{"
                  "border:none;"
                  "color:#fffff3;"
                  "}";

    edit="QLineEdit{"
                  "border-top:none;"
                  "border-left:none;"
                  "border-right:none;"
                  "border-bottom:1.5px solid  #fffff3;"
                  "margin-bottom:15px;"
                  "padding-bottom:5px;"
                  "min-height:24px;"
            "}";

    baseBtn="QPushButton:hover {"
            "border-radius:4px;"
            "padding: 10px 5px;"
            "background-color:rgba(0, 160, 134, 0.3);"
            "color: #ffffff;"
           "border:none;"
           " border-radius:10px;"
            "min-width:130px;"
           "padding:10px 5px;"
            "}";






// mes couleurs  #E0E3DA #A593E0  #566270

        addBtn="QPushButton {"
                "background-color:#00A086;"
                "color: #ffffff;"
               "border:none;"
               " border-radius:10px;"
                "min-width:130px;"
               "padding:10px 5px;"
                       "}"
                "QPushButton:hover {"
                "background-color:#00584a;"
                       "}";


//    cs2="QMainWindow {"
//                  "background-color:#011627;"
//                  "}";
//    cs3="QTabWidget {"
//                  "background-color: #001d3d;"
//                  "}";
//    cs4="QDialog {"
//        "background-color: #ffffff;"
//        "border-radius:10px;"
//        "}";


//    removeBorder="QLineEdit {"
//                  "background-color: #ffffff;"
//                  "border-top:none;"
//                  "border-left:none;"
//                  "border-right:none;"
//                  "border-bottom:1px solid  #24a0ed;"
//                  "margin-bottom:15px;"
//                   "padding-bottom:5px;"
//                  "min-height:24px;"
//                  "}";

//    margin="QLabel {"
//          "margin-top:6px;"
//          "}";

//    primaryBtn="QPushButton {"
//              "background-color: #24a0ed;"
//              "color: #ffffff;"
//               "border:none;"
//               "border-radius:4px;"
//              "}";
    cancelBtn="QPushButton {"
              "background-color: #ffffff;"
              "color: #df4759;"
               "border:1px solid #df4759;"
               "border-radius:10px;"
              "}"
              "QPushButton:hover {"
              "background-color:#00584a;"
                     "}";
    disabledBtn="QPushButton {"
                   "background-color: #cccccc;"
                   "color: #666666;"
                   "border-radius:10px;"
                   "padding: 5px 5px;"
                  "}"
                "QPushButton:hover {"
                "background-color:#00584a;"
                       "}";

     updateBtn="QPushButton {"
                 "background-color: #4361ee;"
                  "color: #f5f3f4;"
             "border-radius:10px;"
             "padding: 10px 5px;"
                 "}"
               "QPushButton:hover {"
               "background-color:#00584a;"
                      "}";

     deleteBtn="QPushButton {"
               "background-color: #e5383b;"
                "color: #f5f3f4;"
             "border-radius:10px;"
             "padding: 10px 5px;"
               "}"
               "QPushButton:hover {"
               "background-color:#00584a;"
                      "}";
}
