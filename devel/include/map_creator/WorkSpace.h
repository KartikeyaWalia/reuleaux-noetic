// Generated by gencpp from file map_creator/WorkSpace.msg
// DO NOT EDIT!


#ifndef MAP_CREATOR_MESSAGE_WORKSPACE_H
#define MAP_CREATOR_MESSAGE_WORKSPACE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <map_creator/WsSphere.h>

namespace map_creator
{
template <class ContainerAllocator>
struct WorkSpace_
{
  typedef WorkSpace_<ContainerAllocator> Type;

  WorkSpace_()
    : header()
    , WsSpheres()
    , resolution(0.0)  {
    }
  WorkSpace_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , WsSpheres(_alloc)
    , resolution(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::map_creator::WsSphere_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::map_creator::WsSphere_<ContainerAllocator> >> _WsSpheres_type;
  _WsSpheres_type WsSpheres;

   typedef float _resolution_type;
  _resolution_type resolution;





  typedef boost::shared_ptr< ::map_creator::WorkSpace_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::map_creator::WorkSpace_<ContainerAllocator> const> ConstPtr;

}; // struct WorkSpace_

typedef ::map_creator::WorkSpace_<std::allocator<void> > WorkSpace;

typedef boost::shared_ptr< ::map_creator::WorkSpace > WorkSpacePtr;
typedef boost::shared_ptr< ::map_creator::WorkSpace const> WorkSpaceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::map_creator::WorkSpace_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::map_creator::WorkSpace_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::map_creator::WorkSpace_<ContainerAllocator1> & lhs, const ::map_creator::WorkSpace_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.WsSpheres == rhs.WsSpheres &&
    lhs.resolution == rhs.resolution;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::map_creator::WorkSpace_<ContainerAllocator1> & lhs, const ::map_creator::WorkSpace_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace map_creator

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::map_creator::WorkSpace_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_creator::WorkSpace_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::map_creator::WorkSpace_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::map_creator::WorkSpace_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_creator::WorkSpace_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_creator::WorkSpace_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::map_creator::WorkSpace_<ContainerAllocator> >
{
  static const char* value()
  {
    return "08b897335c18d9cb761a24eb320804d1";
  }

  static const char* value(const ::map_creator::WorkSpace_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x08b897335c18d9cbULL;
  static const uint64_t static_value2 = 0x761a24eb320804d1ULL;
};

template<class ContainerAllocator>
struct DataType< ::map_creator::WorkSpace_<ContainerAllocator> >
{
  static const char* value()
  {
    return "map_creator/WorkSpace";
  }

  static const char* value(const ::map_creator::WorkSpace_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::map_creator::WorkSpace_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"\n"
"map_creator/WsSphere[] WsSpheres\n"
"\n"
"float32 resolution\n"
"\n"
"\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: map_creator/WsSphere\n"
"std_msgs/Header header\n"
"\n"
"geometry_msgs/Point32 point\n"
"\n"
"float32 ri\n"
"\n"
"geometry_msgs/Pose[] poses\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point32\n"
"# This contains the position of a point in free space(with 32 bits of precision).\n"
"# It is recommeded to use Point wherever possible instead of Point32.  \n"
"# \n"
"# This recommendation is to promote interoperability.  \n"
"#\n"
"# This message is designed to take up less space when sending\n"
"# lots of points at once, as in the case of a PointCloud.  \n"
"\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::map_creator::WorkSpace_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::map_creator::WorkSpace_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.WsSpheres);
      stream.next(m.resolution);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WorkSpace_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::map_creator::WorkSpace_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::map_creator::WorkSpace_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "WsSpheres[]" << std::endl;
    for (size_t i = 0; i < v.WsSpheres.size(); ++i)
    {
      s << indent << "  WsSpheres[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::map_creator::WsSphere_<ContainerAllocator> >::stream(s, indent + "    ", v.WsSpheres[i]);
    }
    s << indent << "resolution: ";
    Printer<float>::stream(s, indent + "  ", v.resolution);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAP_CREATOR_MESSAGE_WORKSPACE_H
