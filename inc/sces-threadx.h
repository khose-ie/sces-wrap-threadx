/// @file    sces-threadx.h
/// @brief   SCES ThreadX OS Abstraction Layer Header
/// @details This configuration header file defines the OS abstraction layer for 
///          SCES using the ThreadX RTOS as the underlying operating system.
///          It includes necessary type definitions and constants required for
///          the SCES OS abstraction layer implementation.
/// @author  Khose-ie<khose-ie@outlook.com>
/// @date    2024-06-10

#ifndef __SCES_THREADX_H__
#define __SCES_THREADX_H__

/// @brief Size of the OS stack memory zone
/// @details This constant defines the size (in bytes) of the memory zone
///          allocated for the OS stack byte pool.
///          If you always use static stack allocation APIs, you can reduce this size
///          to save memory due to only management blocks are allocated from this pool.
#define SCES_OS_STACK_SIZE (1024 * 60)

#endif // __SCES_THREADX_H__
