/*
 *    Copyright (C) 2006-2010 by RoboLab - University of Extremadura
 *
 *    This file is part of RoboComp
 *
 *    RoboComp is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    RoboComp is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with RoboComp.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef OBJECTDETECTIONI_H
#define OBJECTDETECTIONI_H

// QT includes
#include <QtCore/QObject>

// Ice includes
#include <Ice/Ice.h>
#include <objectDetection.h>

#include <config.h>
#include "genericworker.h"

using namespace RoboCompobjectDetection;

class objectDetectionI : public QObject , public virtual RoboCompobjectDetection::objectDetection
{
Q_OBJECT
public:
	objectDetectionI( GenericWorker *_worker, QObject *parent = 0 );
	~objectDetectionI();
	void  setModel2Fit(const string& model, const Ice::Current& = Ice::Current());
void  removePCwithinModel(const string& model, const Ice::Current& = Ice::Current());


	QMutex *mutex;
private:

	GenericWorker *worker;
public slots:


};

#endif