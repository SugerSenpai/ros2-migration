# generated from rosidl_generator_py/resource/_idl.py.em
# with input from unitree_legged_msgs:msg/HighCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'head'
# Member 'sn'
# Member 'version'
# Member 'position'
# Member 'euler'
# Member 'velocity'
# Member 'wirelessremote'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HighCmd(type):
    """Metaclass of message 'HighCmd'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('unitree_legged_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'unitree_legged_msgs.msg.HighCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__high_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__high_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__high_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__high_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__high_cmd

            from unitree_legged_msgs.msg import BmsCmd
            if BmsCmd.__class__._TYPE_SUPPORT is None:
                BmsCmd.__class__.__import_type_support__()

            from unitree_legged_msgs.msg import LED
            if LED.__class__._TYPE_SUPPORT is None:
                LED.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HighCmd(metaclass=Metaclass_HighCmd):
    """Message class 'HighCmd'."""

    __slots__ = [
        '_head',
        '_levelflag',
        '_framereserve',
        '_sn',
        '_version',
        '_bandwidth',
        '_mode',
        '_gaittype',
        '_speedlevel',
        '_footraiseheight',
        '_bodyheight',
        '_position',
        '_euler',
        '_velocity',
        '_yawspeed',
        '_bms',
        '_led',
        '_wirelessremote',
        '_reserve',
        '_crc',
    ]

    _fields_and_field_types = {
        'head': 'uint8[2]',
        'levelflag': 'uint8',
        'framereserve': 'uint8',
        'sn': 'uint32[2]',
        'version': 'uint32[2]',
        'bandwidth': 'uint16',
        'mode': 'uint8',
        'gaittype': 'uint8',
        'speedlevel': 'uint8',
        'footraiseheight': 'float',
        'bodyheight': 'float',
        'position': 'float[2]',
        'euler': 'float[3]',
        'velocity': 'float[2]',
        'yawspeed': 'float',
        'bms': 'unitree_legged_msgs/BmsCmd',
        'led': 'unitree_legged_msgs/LED[4]',
        'wirelessremote': 'uint8[40]',
        'reserve': 'uint32',
        'crc': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 2),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint32'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint32'), 2),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['unitree_legged_msgs', 'msg'], 'BmsCmd'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['unitree_legged_msgs', 'msg'], 'LED'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 40),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'head' not in kwargs:
            self.head = numpy.zeros(2, dtype=numpy.uint8)
        else:
            self.head = numpy.array(kwargs.get('head'), dtype=numpy.uint8)
            assert self.head.shape == (2, )
        self.levelflag = kwargs.get('levelflag', int())
        self.framereserve = kwargs.get('framereserve', int())
        if 'sn' not in kwargs:
            self.sn = numpy.zeros(2, dtype=numpy.uint32)
        else:
            self.sn = numpy.array(kwargs.get('sn'), dtype=numpy.uint32)
            assert self.sn.shape == (2, )
        if 'version' not in kwargs:
            self.version = numpy.zeros(2, dtype=numpy.uint32)
        else:
            self.version = numpy.array(kwargs.get('version'), dtype=numpy.uint32)
            assert self.version.shape == (2, )
        self.bandwidth = kwargs.get('bandwidth', int())
        self.mode = kwargs.get('mode', int())
        self.gaittype = kwargs.get('gaittype', int())
        self.speedlevel = kwargs.get('speedlevel', int())
        self.footraiseheight = kwargs.get('footraiseheight', float())
        self.bodyheight = kwargs.get('bodyheight', float())
        if 'position' not in kwargs:
            self.position = numpy.zeros(2, dtype=numpy.float32)
        else:
            self.position = numpy.array(kwargs.get('position'), dtype=numpy.float32)
            assert self.position.shape == (2, )
        if 'euler' not in kwargs:
            self.euler = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.euler = numpy.array(kwargs.get('euler'), dtype=numpy.float32)
            assert self.euler.shape == (3, )
        if 'velocity' not in kwargs:
            self.velocity = numpy.zeros(2, dtype=numpy.float32)
        else:
            self.velocity = numpy.array(kwargs.get('velocity'), dtype=numpy.float32)
            assert self.velocity.shape == (2, )
        self.yawspeed = kwargs.get('yawspeed', float())
        from unitree_legged_msgs.msg import BmsCmd
        self.bms = kwargs.get('bms', BmsCmd())
        from unitree_legged_msgs.msg import LED
        self.led = kwargs.get(
            'led',
            [LED() for x in range(4)]
        )
        if 'wirelessremote' not in kwargs:
            self.wirelessremote = numpy.zeros(40, dtype=numpy.uint8)
        else:
            self.wirelessremote = numpy.array(kwargs.get('wirelessremote'), dtype=numpy.uint8)
            assert self.wirelessremote.shape == (40, )
        self.reserve = kwargs.get('reserve', int())
        self.crc = kwargs.get('crc', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if all(self.head != other.head):
            return False
        if self.levelflag != other.levelflag:
            return False
        if self.framereserve != other.framereserve:
            return False
        if all(self.sn != other.sn):
            return False
        if all(self.version != other.version):
            return False
        if self.bandwidth != other.bandwidth:
            return False
        if self.mode != other.mode:
            return False
        if self.gaittype != other.gaittype:
            return False
        if self.speedlevel != other.speedlevel:
            return False
        if self.footraiseheight != other.footraiseheight:
            return False
        if self.bodyheight != other.bodyheight:
            return False
        if all(self.position != other.position):
            return False
        if all(self.euler != other.euler):
            return False
        if all(self.velocity != other.velocity):
            return False
        if self.yawspeed != other.yawspeed:
            return False
        if self.bms != other.bms:
            return False
        if self.led != other.led:
            return False
        if all(self.wirelessremote != other.wirelessremote):
            return False
        if self.reserve != other.reserve:
            return False
        if self.crc != other.crc:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def head(self):
        """Message field 'head'."""
        return self._head

    @head.setter
    def head(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'head' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 2, \
                "The 'head' numpy.ndarray() must have a size of 2"
            self._head = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'head' field must be a set or sequence with length 2 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._head = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def levelflag(self):
        """Message field 'levelflag'."""
        return self._levelflag

    @levelflag.setter
    def levelflag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'levelflag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'levelflag' field must be an unsigned integer in [0, 255]"
        self._levelflag = value

    @builtins.property
    def framereserve(self):
        """Message field 'framereserve'."""
        return self._framereserve

    @framereserve.setter
    def framereserve(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'framereserve' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'framereserve' field must be an unsigned integer in [0, 255]"
        self._framereserve = value

    @builtins.property
    def sn(self):
        """Message field 'sn'."""
        return self._sn

    @sn.setter
    def sn(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint32, \
                "The 'sn' numpy.ndarray() must have the dtype of 'numpy.uint32'"
            assert value.size == 2, \
                "The 'sn' numpy.ndarray() must have a size of 2"
            self._sn = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'sn' field must be a set or sequence with length 2 and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._sn = numpy.array(value, dtype=numpy.uint32)

    @builtins.property
    def version(self):
        """Message field 'version'."""
        return self._version

    @version.setter
    def version(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint32, \
                "The 'version' numpy.ndarray() must have the dtype of 'numpy.uint32'"
            assert value.size == 2, \
                "The 'version' numpy.ndarray() must have a size of 2"
            self._version = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'version' field must be a set or sequence with length 2 and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._version = numpy.array(value, dtype=numpy.uint32)

    @builtins.property
    def bandwidth(self):
        """Message field 'bandwidth'."""
        return self._bandwidth

    @bandwidth.setter
    def bandwidth(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bandwidth' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'bandwidth' field must be an unsigned integer in [0, 65535]"
        self._bandwidth = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value

    @builtins.property
    def gaittype(self):
        """Message field 'gaittype'."""
        return self._gaittype

    @gaittype.setter
    def gaittype(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gaittype' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gaittype' field must be an unsigned integer in [0, 255]"
        self._gaittype = value

    @builtins.property
    def speedlevel(self):
        """Message field 'speedlevel'."""
        return self._speedlevel

    @speedlevel.setter
    def speedlevel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speedlevel' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'speedlevel' field must be an unsigned integer in [0, 255]"
        self._speedlevel = value

    @builtins.property
    def footraiseheight(self):
        """Message field 'footraiseheight'."""
        return self._footraiseheight

    @footraiseheight.setter
    def footraiseheight(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'footraiseheight' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'footraiseheight' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._footraiseheight = value

    @builtins.property
    def bodyheight(self):
        """Message field 'bodyheight'."""
        return self._bodyheight

    @bodyheight.setter
    def bodyheight(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bodyheight' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'bodyheight' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._bodyheight = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'position' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 2, \
                "The 'position' numpy.ndarray() must have a size of 2"
            self._position = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'position' field must be a set or sequence with length 2 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._position = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def euler(self):
        """Message field 'euler'."""
        return self._euler

    @euler.setter
    def euler(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'euler' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'euler' numpy.ndarray() must have a size of 3"
            self._euler = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'euler' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._euler = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'velocity' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 2, \
                "The 'velocity' numpy.ndarray() must have a size of 2"
            self._velocity = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'velocity' field must be a set or sequence with length 2 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._velocity = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def yawspeed(self):
        """Message field 'yawspeed'."""
        return self._yawspeed

    @yawspeed.setter
    def yawspeed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yawspeed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yawspeed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yawspeed = value

    @builtins.property
    def bms(self):
        """Message field 'bms'."""
        return self._bms

    @bms.setter
    def bms(self, value):
        if __debug__:
            from unitree_legged_msgs.msg import BmsCmd
            assert \
                isinstance(value, BmsCmd), \
                "The 'bms' field must be a sub message of type 'BmsCmd'"
        self._bms = value

    @builtins.property
    def led(self):
        """Message field 'led'."""
        return self._led

    @led.setter
    def led(self, value):
        if __debug__:
            from unitree_legged_msgs.msg import LED
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 4 and
                 all(isinstance(v, LED) for v in value) and
                 True), \
                "The 'led' field must be a set or sequence with length 4 and each value of type 'LED'"
        self._led = value

    @builtins.property
    def wirelessremote(self):
        """Message field 'wirelessremote'."""
        return self._wirelessremote

    @wirelessremote.setter
    def wirelessremote(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'wirelessremote' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 40, \
                "The 'wirelessremote' numpy.ndarray() must have a size of 40"
            self._wirelessremote = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 40 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'wirelessremote' field must be a set or sequence with length 40 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._wirelessremote = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def reserve(self):
        """Message field 'reserve'."""
        return self._reserve

    @reserve.setter
    def reserve(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserve' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'reserve' field must be an unsigned integer in [0, 4294967295]"
        self._reserve = value

    @builtins.property
    def crc(self):
        """Message field 'crc'."""
        return self._crc

    @crc.setter
    def crc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'crc' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'crc' field must be an unsigned integer in [0, 4294967295]"
        self._crc = value
