// Generated by gencpp from file map_creator/capShape.msg
// DO NOT EDIT!


#ifndef MAP_CREATOR_MESSAGE_CAPSHAPE_H
#define MAP_CREATOR_MESSAGE_CAPSHAPE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Pose.h>

namespace map_creator
{
template <class ContainerAllocator>
struct capShape_
{
  typedef capShape_<ContainerAllocator> Type;

  capShape_()
    : header()
    , identifier(0.0)
    , ri(0.0)
    , angleSFE(0.0)
    , pose()  {
    }
  capShape_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , identifier(0.0)
    , ri(0.0)
    , angleSFE(0.0)
    , pose(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _identifier_type;
  _identifier_type identifier;

   typedef float _ri_type;
  _ri_type ri;

   typedef float _angleSFE_type;
  _angleSFE_type angleSFE;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;





  typedef boost::shared_ptr< ::map_creator::capShape_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::map_creator::capShape_<ContainerAllocator> const> ConstPtr;

}; // struct capShape_

typedef ::map_creator::capShape_<std::allocator<void> > capShape;

typedef boost::shared_ptr< ::map_creator::capShape > capShapePtr;
typedef boost::shared_ptr< ::map_creator::capShape const> capShapeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::map_creator::capShape_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::map_creator::capShape_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::map_creator::capShape_<ContainerAllocator1> & lhs, const ::map_creator::capShape_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.identifier == rhs.identifier &&
    lhs.ri == rhs.ri &&
    lhs.angleSFE == rhs.angleSFE &&
    lhs.pose == rhs.pose;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::map_creator::capShape_<ContainerAllocator1> & lhs, const ::map_creator::capShape_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace map_creator

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::map_creator::capShape_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_creator::capShape_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::map_creator::capShape_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::map_creator::capShape_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_creator::capShape_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_creator::capShape_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::map_creator::capShape_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e886cfb7b66c55b63af8f5e2cc7f5498";
  }

  static const char* value(const ::map_creator::capShape_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe886cfb7b66c55b6ULL;
  static const uint64_t static_value2 = 0x3af8f5e2cc7f5498ULL;
};

template<class ContainerAllocator>
struct DataType< ::map_creator::capShape_<ContainerAllocator> >
{
  static const char* value()
  {
    return "map_creator/capShape";
  }

  static const char* value(const ::map_creator::capShape_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::map_creator::capShape_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"\n"
"float32 identifier\n"
"\n"
"float32 ri\n"
"\n"
"float32 angleSFE\n"
"\n"
"geometry_msgs/Pose pose\n"
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

  static const char* value(const ::map_creator::capShape_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::map_creator::capShape_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.identifier);
      stream.next(m.ri);
      stream.next(m.angleSFE);
      stream.next(m.pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct capShape_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::map_creator::capShape_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::map_creator::capShape_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "identifier: ";
    Printer<float>::stream(s, indent + "  ", v.identifier);
    s << indent << "ri: ";
    Printer<float>::stream(s, indent + "  ", v.ri);
    s << indent << "angleSFE: ";
    Printer<float>::stream(s, indent + "  ", v.angleSFE);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAP_CREATOR_MESSAGE_CAPSHAPE_H
