#pragma once

#include "VectorFieldsUtils.h"
#include "FieldedMesh.h"


class PathFinder
{
public:
	PathFinder(const FieldedMesh& fieldedMesh);

	vector<vector<Vec3f>> getParticlePaths();

	

protected:

	const FieldedMesh& fieldedMesh;
	double dt;
	vector<Vec3f> getParticlePath(const Mesh::FaceHandle& face);

};
