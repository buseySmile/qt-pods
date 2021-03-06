///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//    This file is part of qt-pods.                                          //
//    Copyright (C) 2015 Jacob Dawid, jacob@omg-it.works                     //
//                                                                           //
//    qt-pods is free software: you can redistribute it and/or modify        //
//    it under the terms of the GNU General Public License as published by   //
//    the Free Software Foundation, either version 3 of the License, or      //
//    (at your option) any later version.                                    //
//                                                                           //
//    qt-pods is distributed in the hope that it will be useful,             //
//    but WITHOUT ANY WARRANTY; without even the implied warranty of         //
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          //
//    GNU General Public License for more details.                           //
//                                                                           //
//    You should have received a copy of the GNU General Public License      //
//    along with qt-pods. If not, see <http://www.gnu.org/licenses/>.        //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

#pragma once

// Qt includes
#include <QDialog>

namespace Ui {
class SourcesDialog;
}

class SourcesDialog : public QDialog {
    Q_OBJECT

public:
    explicit SourcesDialog(QWidget *parent = 0);
    ~SourcesDialog();

    void setSources(QStringList sources);
    QStringList sources();

public slots:
    void on_pushButtonAddSource_clicked();
    void on_pushButtonRemoveSources_clicked();

private:
    Ui::SourcesDialog *ui;
};
