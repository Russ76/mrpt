#include <any>
#include <chrono>
#include <functional>
#include <iterator>
#include <map>
#include <memory>
#include <mrpt/containers/CommentPosition.h>
#include <mrpt/containers/yaml.h>
#include <mrpt/core/Clock.h>
#include <mrpt/serialization/CSerializable.h>
#include <ratio>
#include <sstream> // __str__
#include <string>
#include <string_view>
#include <utility>
#include <vector>

#include <functional>
#include <pybind11/pybind11.h>
#include <string>
#include <pybind11/stl.h>


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

PYBIND11_MAKE_OPAQUE(std::multimap<mrpt::Clock::time_point, mrpt::serialization::CSerializable::Ptr>)
PYBIND11_MAKE_OPAQUE(std::map<mrpt::containers::yaml::node_t,mrpt::containers::yaml::node_t>)


void bind_std_stl_multimap(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // std::multimap file:bits/stl_multimap.h line:99
		pybind11::class_<std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000> > >,std::shared_ptr<mrpt::serialization::CSerializable>>, std::shared_ptr<std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000> > >,std::shared_ptr<mrpt::serialization::CSerializable>>>> cl(M("std"), "multimap_std_chrono_time_point_mrpt_Clock_std_chrono_duration_long_std_ratio_1_10000000_std_shared_ptr_mrpt_serialization_CSerializable_t", "");
		cl.def( pybind11::init( [](){ return new std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000> > >,std::shared_ptr<mrpt::serialization::CSerializable>>(); } ) );
		cl.def( pybind11::init( [](const struct std::less<mrpt::Clock::time_point > & a0){ return new std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000> > >,std::shared_ptr<mrpt::serialization::CSerializable>>(a0); } ), "doc" , pybind11::arg("__comp"));
		cl.def( pybind11::init<const struct std::less<mrpt::Clock::time_point > &, const class std::allocator<struct std::pair<const mrpt::Clock::time_point, class std::shared_ptr<class mrpt::serialization::CSerializable> > > &>(), pybind11::arg("__comp"), pybind11::arg("__a") );

		cl.def( pybind11::init( [](std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000> > >,std::shared_ptr<mrpt::serialization::CSerializable>> const &o){ return new std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000> > >,std::shared_ptr<mrpt::serialization::CSerializable>>(o); } ) );
		cl.def( pybind11::init<const class std::allocator<struct std::pair<const mrpt::Clock::time_point, class std::shared_ptr<class mrpt::serialization::CSerializable> > > &>(), pybind11::arg("__a") );

		cl.def( pybind11::init<const class std::multimap<mrpt::Clock::time_point, class std::shared_ptr<class mrpt::serialization::CSerializable> > &, const class std::allocator<struct std::pair<const mrpt::Clock::time_point, class std::shared_ptr<class mrpt::serialization::CSerializable> > > &>(), pybind11::arg("__m"), pybind11::arg("__a") );

		cl.def("assign", (class std::multimap<mrpt::Clock::time_point, class std::shared_ptr<class mrpt::serialization::CSerializable> > & (std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000> > >,std::shared_ptr<mrpt::serialization::CSerializable>>::*)(const class std::multimap<mrpt::Clock::time_point, class std::shared_ptr<class mrpt::serialization::CSerializable> > &)) &std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000>>>, std::shared_ptr<mrpt::serialization::CSerializable>>::operator=, "C++: std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000>>>, std::shared_ptr<mrpt::serialization::CSerializable>>::operator=(const class std::multimap<mrpt::Clock::time_point, class std::shared_ptr<class mrpt::serialization::CSerializable> > &) --> class std::multimap<mrpt::Clock::time_point, class std::shared_ptr<class mrpt::serialization::CSerializable> > &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		cl.def("get_allocator", (class std::allocator<struct std::pair<const mrpt::Clock::time_point, class std::shared_ptr<class mrpt::serialization::CSerializable> > > (std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000> > >,std::shared_ptr<mrpt::serialization::CSerializable>>::*)() const) &std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000>>>, std::shared_ptr<mrpt::serialization::CSerializable>>::get_allocator, "C++: std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000>>>, std::shared_ptr<mrpt::serialization::CSerializable>>::get_allocator() const --> class std::allocator<struct std::pair<const mrpt::Clock::time_point, class std::shared_ptr<class mrpt::serialization::CSerializable> > >");
		cl.def("empty", (bool (std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000> > >,std::shared_ptr<mrpt::serialization::CSerializable>>::*)() const) &std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000>>>, std::shared_ptr<mrpt::serialization::CSerializable>>::empty, "C++: std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000>>>, std::shared_ptr<mrpt::serialization::CSerializable>>::empty() const --> bool");
		cl.def("size", (size_t (std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000> > >,std::shared_ptr<mrpt::serialization::CSerializable>>::*)() const) &std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000>>>, std::shared_ptr<mrpt::serialization::CSerializable>>::size, "C++: std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000>>>, std::shared_ptr<mrpt::serialization::CSerializable>>::size() const --> size_t");
		cl.def("max_size", (size_t (std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000> > >,std::shared_ptr<mrpt::serialization::CSerializable>>::*)() const) &std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000>>>, std::shared_ptr<mrpt::serialization::CSerializable>>::max_size, "C++: std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000>>>, std::shared_ptr<mrpt::serialization::CSerializable>>::max_size() const --> size_t");
		cl.def("erase", (size_t (std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000> > >,std::shared_ptr<mrpt::serialization::CSerializable>>::*)(const mrpt::Clock::time_point &)) &std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000>>>, std::shared_ptr<mrpt::serialization::CSerializable>>::erase, "C++: std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000>>>, std::shared_ptr<mrpt::serialization::CSerializable>>::erase(const mrpt::Clock::time_point &) --> size_t", pybind11::arg("__x"));
		cl.def("swap", (void (std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000> > >,std::shared_ptr<mrpt::serialization::CSerializable>>::*)(class std::multimap<mrpt::Clock::time_point, class std::shared_ptr<class mrpt::serialization::CSerializable> > &)) &std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000>>>, std::shared_ptr<mrpt::serialization::CSerializable>>::swap, "C++: std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000>>>, std::shared_ptr<mrpt::serialization::CSerializable>>::swap(class std::multimap<mrpt::Clock::time_point, class std::shared_ptr<class mrpt::serialization::CSerializable> > &) --> void", pybind11::arg("__x"));
		cl.def("clear", (void (std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000> > >,std::shared_ptr<mrpt::serialization::CSerializable>>::*)()) &std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000>>>, std::shared_ptr<mrpt::serialization::CSerializable>>::clear, "C++: std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000>>>, std::shared_ptr<mrpt::serialization::CSerializable>>::clear() --> void");
		cl.def("key_comp", (struct std::less<mrpt::Clock::time_point > (std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000> > >,std::shared_ptr<mrpt::serialization::CSerializable>>::*)() const) &std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000>>>, std::shared_ptr<mrpt::serialization::CSerializable>>::key_comp, "C++: std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000>>>, std::shared_ptr<mrpt::serialization::CSerializable>>::key_comp() const --> struct std::less<mrpt::Clock::time_point >");
		cl.def("count", (size_t (std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000> > >,std::shared_ptr<mrpt::serialization::CSerializable>>::*)(const mrpt::Clock::time_point &) const) &std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000>>>, std::shared_ptr<mrpt::serialization::CSerializable>>::count, "C++: std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000>>>, std::shared_ptr<mrpt::serialization::CSerializable>>::count(const mrpt::Clock::time_point &) const --> size_t", pybind11::arg("__x"));
		cl.def("equal_range", (struct std::pair<struct std::_Rb_tree_iterator<struct std::pair<const mrpt::Clock::time_point, class std::shared_ptr<class mrpt::serialization::CSerializable> > >, struct std::_Rb_tree_iterator<struct std::pair<const mrpt::Clock::time_point, class std::shared_ptr<class mrpt::serialization::CSerializable> > > > (std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000> > >,std::shared_ptr<mrpt::serialization::CSerializable>>::*)(const mrpt::Clock::time_point &)) &std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000>>>, std::shared_ptr<mrpt::serialization::CSerializable>>::equal_range, "C++: std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000>>>, std::shared_ptr<mrpt::serialization::CSerializable>>::equal_range(const mrpt::Clock::time_point &) --> struct std::pair<struct std::_Rb_tree_iterator<struct std::pair<const mrpt::Clock::time_point, class std::shared_ptr<class mrpt::serialization::CSerializable> > >, struct std::_Rb_tree_iterator<struct std::pair<const mrpt::Clock::time_point, class std::shared_ptr<class mrpt::serialization::CSerializable> > > >", pybind11::arg("__x"));

		cl.def("__iter__", [](const std::multimap<std::chrono::time_point<mrpt::Clock, std::chrono::duration<int64_t, std::ratio<1, 10000000> > >,std::shared_ptr<mrpt::serialization::CSerializable>> &o) {
			return pybind11::make_iterator(o.begin(), o.end());
			}, pybind11::keep_alive<0, 1>());
	}
	{ // std::map file:bits/stl_map.h line:100
		pybind11::class_<std::map<mrpt::containers::yaml::node_t,mrpt::containers::yaml::node_t>, std::shared_ptr<std::map<mrpt::containers::yaml::node_t,mrpt::containers::yaml::node_t>>> cl(M("std"), "map_mrpt_containers_yaml_node_t_mrpt_containers_yaml_node_t_t", "");
		cl.def( pybind11::init( [](){ return new std::map<mrpt::containers::yaml::node_t,mrpt::containers::yaml::node_t>(); } ) );
		cl.def( pybind11::init( [](const struct std::less<struct mrpt::containers::yaml::node_t> & a0){ return new std::map<mrpt::containers::yaml::node_t,mrpt::containers::yaml::node_t>(a0); } ), "doc" , pybind11::arg("__comp"));
		cl.def( pybind11::init<const struct std::less<struct mrpt::containers::yaml::node_t> &, const class std::allocator<struct std::pair<const struct mrpt::containers::yaml::node_t, struct mrpt::containers::yaml::node_t> > &>(), pybind11::arg("__comp"), pybind11::arg("__a") );

		cl.def( pybind11::init( [](std::map<mrpt::containers::yaml::node_t,mrpt::containers::yaml::node_t> const &o){ return new std::map<mrpt::containers::yaml::node_t,mrpt::containers::yaml::node_t>(o); } ) );
		cl.def( pybind11::init<const class std::allocator<struct std::pair<const struct mrpt::containers::yaml::node_t, struct mrpt::containers::yaml::node_t> > &>(), pybind11::arg("__a") );

		cl.def( pybind11::init<const class std::map<struct mrpt::containers::yaml::node_t, struct mrpt::containers::yaml::node_t> &, const class std::allocator<struct std::pair<const struct mrpt::containers::yaml::node_t, struct mrpt::containers::yaml::node_t> > &>(), pybind11::arg("__m"), pybind11::arg("__a") );

		cl.def("assign", (class std::map<struct mrpt::containers::yaml::node_t, struct mrpt::containers::yaml::node_t> & (std::map<mrpt::containers::yaml::node_t,mrpt::containers::yaml::node_t>::*)(const class std::map<struct mrpt::containers::yaml::node_t, struct mrpt::containers::yaml::node_t> &)) &std::map<mrpt::containers::yaml::node_t, mrpt::containers::yaml::node_t>::operator=, "C++: std::map<mrpt::containers::yaml::node_t, mrpt::containers::yaml::node_t>::operator=(const class std::map<struct mrpt::containers::yaml::node_t, struct mrpt::containers::yaml::node_t> &) --> class std::map<struct mrpt::containers::yaml::node_t, struct mrpt::containers::yaml::node_t> &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		cl.def("get_allocator", (class std::allocator<struct std::pair<const struct mrpt::containers::yaml::node_t, struct mrpt::containers::yaml::node_t> > (std::map<mrpt::containers::yaml::node_t,mrpt::containers::yaml::node_t>::*)() const) &std::map<mrpt::containers::yaml::node_t, mrpt::containers::yaml::node_t>::get_allocator, "C++: std::map<mrpt::containers::yaml::node_t, mrpt::containers::yaml::node_t>::get_allocator() const --> class std::allocator<struct std::pair<const struct mrpt::containers::yaml::node_t, struct mrpt::containers::yaml::node_t> >");
		cl.def("empty", (bool (std::map<mrpt::containers::yaml::node_t,mrpt::containers::yaml::node_t>::*)() const) &std::map<mrpt::containers::yaml::node_t, mrpt::containers::yaml::node_t>::empty, "C++: std::map<mrpt::containers::yaml::node_t, mrpt::containers::yaml::node_t>::empty() const --> bool");
		cl.def("size", (size_t (std::map<mrpt::containers::yaml::node_t,mrpt::containers::yaml::node_t>::*)() const) &std::map<mrpt::containers::yaml::node_t, mrpt::containers::yaml::node_t>::size, "C++: std::map<mrpt::containers::yaml::node_t, mrpt::containers::yaml::node_t>::size() const --> size_t");
		cl.def("max_size", (size_t (std::map<mrpt::containers::yaml::node_t,mrpt::containers::yaml::node_t>::*)() const) &std::map<mrpt::containers::yaml::node_t, mrpt::containers::yaml::node_t>::max_size, "C++: std::map<mrpt::containers::yaml::node_t, mrpt::containers::yaml::node_t>::max_size() const --> size_t");
		cl.def("__getitem__", (struct mrpt::containers::yaml::node_t & (std::map<mrpt::containers::yaml::node_t,mrpt::containers::yaml::node_t>::*)(const struct mrpt::containers::yaml::node_t &)) &std::map<mrpt::containers::yaml::node_t, mrpt::containers::yaml::node_t>::operator[], "C++: std::map<mrpt::containers::yaml::node_t, mrpt::containers::yaml::node_t>::operator[](const struct mrpt::containers::yaml::node_t &) --> struct mrpt::containers::yaml::node_t &", pybind11::return_value_policy::automatic, pybind11::arg("__k"));
		cl.def("at", (struct mrpt::containers::yaml::node_t & (std::map<mrpt::containers::yaml::node_t,mrpt::containers::yaml::node_t>::*)(const struct mrpt::containers::yaml::node_t &)) &std::map<mrpt::containers::yaml::node_t, mrpt::containers::yaml::node_t>::at, "C++: std::map<mrpt::containers::yaml::node_t, mrpt::containers::yaml::node_t>::at(const struct mrpt::containers::yaml::node_t &) --> struct mrpt::containers::yaml::node_t &", pybind11::return_value_policy::automatic, pybind11::arg("__k"));
		cl.def("insert", (struct std::pair<struct std::_Rb_tree_iterator<struct std::pair<const struct mrpt::containers::yaml::node_t, struct mrpt::containers::yaml::node_t> >, bool> (std::map<mrpt::containers::yaml::node_t,mrpt::containers::yaml::node_t>::*)(const struct std::pair<const struct mrpt::containers::yaml::node_t, struct mrpt::containers::yaml::node_t> &)) &std::map<mrpt::containers::yaml::node_t, mrpt::containers::yaml::node_t>::insert, "C++: std::map<mrpt::containers::yaml::node_t, mrpt::containers::yaml::node_t>::insert(const struct std::pair<const struct mrpt::containers::yaml::node_t, struct mrpt::containers::yaml::node_t> &) --> struct std::pair<struct std::_Rb_tree_iterator<struct std::pair<const struct mrpt::containers::yaml::node_t, struct mrpt::containers::yaml::node_t> >, bool>", pybind11::arg("__x"));
		cl.def("erase", (size_t (std::map<mrpt::containers::yaml::node_t,mrpt::containers::yaml::node_t>::*)(const struct mrpt::containers::yaml::node_t &)) &std::map<mrpt::containers::yaml::node_t, mrpt::containers::yaml::node_t>::erase, "C++: std::map<mrpt::containers::yaml::node_t, mrpt::containers::yaml::node_t>::erase(const struct mrpt::containers::yaml::node_t &) --> size_t", pybind11::arg("__x"));
		cl.def("swap", (void (std::map<mrpt::containers::yaml::node_t,mrpt::containers::yaml::node_t>::*)(class std::map<struct mrpt::containers::yaml::node_t, struct mrpt::containers::yaml::node_t> &)) &std::map<mrpt::containers::yaml::node_t, mrpt::containers::yaml::node_t>::swap, "C++: std::map<mrpt::containers::yaml::node_t, mrpt::containers::yaml::node_t>::swap(class std::map<struct mrpt::containers::yaml::node_t, struct mrpt::containers::yaml::node_t> &) --> void", pybind11::arg("__x"));
		cl.def("clear", (void (std::map<mrpt::containers::yaml::node_t,mrpt::containers::yaml::node_t>::*)()) &std::map<mrpt::containers::yaml::node_t, mrpt::containers::yaml::node_t>::clear, "C++: std::map<mrpt::containers::yaml::node_t, mrpt::containers::yaml::node_t>::clear() --> void");
		cl.def("key_comp", (struct std::less<struct mrpt::containers::yaml::node_t> (std::map<mrpt::containers::yaml::node_t,mrpt::containers::yaml::node_t>::*)() const) &std::map<mrpt::containers::yaml::node_t, mrpt::containers::yaml::node_t>::key_comp, "C++: std::map<mrpt::containers::yaml::node_t, mrpt::containers::yaml::node_t>::key_comp() const --> struct std::less<struct mrpt::containers::yaml::node_t>");
		cl.def("count", (size_t (std::map<mrpt::containers::yaml::node_t,mrpt::containers::yaml::node_t>::*)(const struct mrpt::containers::yaml::node_t &) const) &std::map<mrpt::containers::yaml::node_t, mrpt::containers::yaml::node_t>::count, "C++: std::map<mrpt::containers::yaml::node_t, mrpt::containers::yaml::node_t>::count(const struct mrpt::containers::yaml::node_t &) const --> size_t", pybind11::arg("__x"));
		cl.def("equal_range", (struct std::pair<struct std::_Rb_tree_iterator<struct std::pair<const struct mrpt::containers::yaml::node_t, struct mrpt::containers::yaml::node_t> >, struct std::_Rb_tree_iterator<struct std::pair<const struct mrpt::containers::yaml::node_t, struct mrpt::containers::yaml::node_t> > > (std::map<mrpt::containers::yaml::node_t,mrpt::containers::yaml::node_t>::*)(const struct mrpt::containers::yaml::node_t &)) &std::map<mrpt::containers::yaml::node_t, mrpt::containers::yaml::node_t>::equal_range, "C++: std::map<mrpt::containers::yaml::node_t, mrpt::containers::yaml::node_t>::equal_range(const struct mrpt::containers::yaml::node_t &) --> struct std::pair<struct std::_Rb_tree_iterator<struct std::pair<const struct mrpt::containers::yaml::node_t, struct mrpt::containers::yaml::node_t> >, struct std::_Rb_tree_iterator<struct std::pair<const struct mrpt::containers::yaml::node_t, struct mrpt::containers::yaml::node_t> > >", pybind11::arg("__x"));

		cl.def("__iter__", [](const std::map<mrpt::containers::yaml::node_t,mrpt::containers::yaml::node_t> &o) {
			return pybind11::make_iterator(o.begin(), o.end());
			}, pybind11::keep_alive<0, 1>());
	}
}