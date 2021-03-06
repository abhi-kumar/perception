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
#include "objectdetectionI.h"

objectDetectionI::objectDetectionI(GenericWorker *_worker, QObject *parent) : QObject(parent)
{
	worker = _worker;
	mutex = worker->mutex;       // Shared worker mutex
	// Component initialization...
}


objectDetectionI::~objectDetectionI()
{
	// Free component resources here
}

// Component functions, implementation
void objectDetectionI::statisticalOutliersRemoval(const Ice::Current&){
	worker->statisticalOutliersRemoval();
}

void objectDetectionI::passThrough(const Ice::Current&){
	worker->passThrough();
}

void objectDetectionI::grabThePointCloud(const string& image, const string& pcd, const Ice::Current&){
	worker->grabThePointCloud(image,pcd);
}

void objectDetectionI::aprilFitModel(const string& model, const Ice::Current&){
	worker->aprilFitModel(model);
}

void objectDetectionI::fitModel(const string& model, const string& method, const Ice::Current&){
	worker->fitModel(model,method);
}

void objectDetectionI::getInliers(const string& model, const Ice::Current&){
	worker->getInliers(model);
}

void objectDetectionI::projectInliers(const string& model, const Ice::Current&){
	worker->projectInliers(model);
}

void objectDetectionI::convexHull(const string& model, const Ice::Current&){
	worker->convexHull(model);
}

void objectDetectionI::extractPolygon(const string& model, const Ice::Current&){
	worker->extractPolygon(model);
}

void objectDetectionI::ransac(const string& model, const Ice::Current&){
	worker->ransac(model);
}

void objectDetectionI::normalSegmentation(const string& model, const Ice::Current&){
	worker->normalSegmentation(model);
}

void objectDetectionI::euclideanClustering(Ice::Int& numCluseters, const Ice::Current&){
	worker->euclideanClustering(numCluseters);
}

void objectDetectionI::showObject(Ice::Int numObject, const Ice::Current&){
	worker->showObject(numObject);
}

void objectDetectionI::reset(const Ice::Current&){
	worker->reset();
}

void objectDetectionI::mirrorPC(const Ice::Current&){
	worker->mirrorPC();
}

void objectDetectionI::mindTheGapPC(const Ice::Current&){
	worker->mindTheGapPC();
}

void objectDetectionI::reloadVFH(const Ice::Current&){
	worker->reloadVFH();
}

void objectDetectionI::loadTrainedVFH(const Ice::Current&){
	worker->loadTrainedVFH();
}

void objectDetectionI::fitTheViewVFH(const Ice::Current&){
	worker->fitTheViewVFH();
}

void objectDetectionI::vfh(listType& guesses, const Ice::Current&){
	worker->vfh(guesses);
}

void objectDetectionI::surfHomography(listType& guesses, const Ice::Current&){
	worker->surfHomography(guesses);
}

void objectDetectionI::centroidBasedPose(Ice::Float& x, Ice::Float& y, Ice::Float& theta, const Ice::Current&){
	worker->centroidBasedPose(x,y,theta);
}

void objectDetectionI::segmentImage(const Ice::Current&){
	worker->segmentImage();
}

void objectDetectionI::grabTheAR(const Ice::Current&){
	worker->grabTheAR();
}

string objectDetectionI::getResult(const string& image, const string& pcd, const Ice::Current&){
	return worker->getResult(image,pcd);
}

void objectDetectionI::setContinousMode(bool mode, const Ice::Current&){
	worker->setContinousMode(mode);
}


