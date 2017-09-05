#pragma once
#include <vector>
#include "struct.hpp"
#include "Vec.hpp"
#include "Matrix.hpp"
#include "Animation.hpp"

class Membre;

struct Child {
	Membre *membre;
	Vec3	jointure;
};

class Membre {
	public:
		Membre(void);
		Membre(Membre const & src);
		virtual ~Membre(void);
		Membre & operator=(Membre const & rhs);

		std::vector<Child>		childrens;
		std::vector<Vertex>		vertices;
		Vec3					origin;

		Transform				transform;

		void applyTransform(Membre *parent);
		Animation				animation;
};