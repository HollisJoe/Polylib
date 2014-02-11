/*
 * Polylib - Polygon Management Library
 *
 * Copyright (c) 2010-2011 VCAD System Research Program, RIKEN.
 * All rights reserved.
 *
 * Copyright (c) 2012-2014 Advanced Institute for Computational Science, RIKEN.
 * All rights reserved.
 *
 */

#ifndef polylib_polygongroupfactory_h
#define polylib_polygongroupfactory_h

#include <vector>

namespace PolylibNS {

class PolygonGroup;

////////////////////////////////////////////////////////////////////////////
///
/// クラス:PolygonGroupFactory
///  
////////////////////////////////////////////////////////////////////////////
class PolygonGroupFactory {
public:
	///
 	/// コンストラクタ。
	///
	PolygonGroupFactory() {};

	///
 	/// デストラクタ。
	///
	virtual ~PolygonGroupFactory() {};

	///
	/// インスタンス作成。
	///
	///  @param[in]	class_name	作成するクラス名。
	///  @return	作成に失敗した場合はNULLが返る。
	///
	virtual PolygonGroup* create_instance(std::string class_name) {
		if (class_name == PolygonGroup::get_class_name()) {
			return new PolygonGroup;
		}
		else {
			return NULL;
		}
	};
};

} //namespace PolylibNS

#endif //polylib_polygongroup_h
