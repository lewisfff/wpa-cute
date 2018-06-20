/*
 * wpaCute - A graphical wpa_supplicant front end
 * Copyright (C) 2018 loh.tar@googlemail.com
 *
 * wpa_gui - ScanResults class
 * Copyright (c) 2005-2006, Jouni Malinen <j@w1.fi>
 *
 * This software may be distributed under the terms of the BSD license.
 * See COPYING for more details.
 */

#ifndef SCANRESULTS_H
#define SCANRESULTS_H

#include <QObject>
#include "ui_scanresults.h"

class WpaGui;

class ScanResults : public QDialog, public Ui::ScanResults
{
	Q_OBJECT

public:
	ScanResults(WpaGui *_wpagui);
	~ScanResults();

public slots:
	virtual void updateResults();
	virtual void requestScan();
	virtual void getResults();
	virtual void bssSelected(QTreeWidgetItem *sel);

protected slots:
	virtual void languageChange();

private:
	WpaGui *wpagui;
};

#endif /* SCANRESULTS_H */
