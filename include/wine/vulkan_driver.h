/* Automatically generated from Vulkan vk.xml; DO NOT EDIT!
 *
 * This file is generated from Vulkan vk.xml file covered
 * by the following copyright and permission notice:
 *
 * Copyright (c) 2015-2018 The Khronos Group Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * ---- Exceptions to the Apache 2.0 License: ----
 *
 * As an exception, if you use this Software to generate code and portions of
 * this Software are embedded into the generated code as a result, you may
 * redistribute such product without providing attribution as would otherwise
 * be required by Sections 4(a), 4(b) and 4(d) of the License.
 *
 * In addition, if you combine or link code generated by this Software with
 * software that is licensed under the GPLv2 or the LGPL v2.0 or 2.1
 * ("`Combined Software`") and if a court of competent jurisdiction determines
 * that the patent provision (Section 3), the indemnity provision (Section 9)
 * or other Section of the License conflicts with the conditions of the
 * applicable GPL or LGPL license, you may retroactively and prospectively
 * choose to deem waived or otherwise exclude such Section(s) of the License,
 * but only in their entirety and only with respect to the Combined Software.
 *
 */

#ifndef __WINE_VULKAN_DRIVER_H
#define __WINE_VULKAN_DRIVER_H

/* Wine internal vulkan driver version, needs to be bumped upon vulkan_funcs changes. */
#define WINE_VULKAN_DRIVER_VERSION 3

struct vulkan_funcs
{
    /* Vulkan global functions. These are the only calls at this point a graphics driver
     * needs to provide. Other function calls will be provided indirectly by dispatch
     * tables part of dispatchable Vulkan objects such as VkInstance or vkDevice.
     */
    VkResult (*p_vkAcquireNextImageKHR)(VkDevice, VkSwapchainKHR, uint64_t, VkSemaphore, VkFence, uint32_t *);
    VkResult (*p_vkCreateInstance)(const VkInstanceCreateInfo *, const VkAllocationCallbacks *, VkInstance *);
    VkResult (*p_vkCreateSwapchainKHR)(VkDevice, const VkSwapchainCreateInfoKHR *, const VkAllocationCallbacks *, VkSwapchainKHR *);
    VkResult (*p_vkCreateWin32SurfaceKHR)(VkInstance, const VkWin32SurfaceCreateInfoKHR *, const VkAllocationCallbacks *, VkSurfaceKHR *);
    void (*p_vkDestroyInstance)(VkInstance, const VkAllocationCallbacks *);
    void (*p_vkDestroySurfaceKHR)(VkInstance, VkSurfaceKHR, const VkAllocationCallbacks *);
    void (*p_vkDestroySwapchainKHR)(VkDevice, VkSwapchainKHR, const VkAllocationCallbacks *);
    VkResult (*p_vkEnumerateInstanceExtensionProperties)(const char *, uint32_t *, VkExtensionProperties *);
    void * (*p_vkGetDeviceProcAddr)(VkDevice, const char *);
    void * (*p_vkGetInstanceProcAddr)(VkInstance, const char *);
    VkResult (*p_vkGetPhysicalDeviceSurfaceCapabilitiesKHR)(VkPhysicalDevice, VkSurfaceKHR, VkSurfaceCapabilitiesKHR *);
    VkResult (*p_vkGetPhysicalDeviceSurfaceFormatsKHR)(VkPhysicalDevice, VkSurfaceKHR, uint32_t *, VkSurfaceFormatKHR *);
    VkResult (*p_vkGetPhysicalDeviceSurfacePresentModesKHR)(VkPhysicalDevice, VkSurfaceKHR, uint32_t *, VkPresentModeKHR *);
    VkResult (*p_vkGetPhysicalDeviceSurfaceSupportKHR)(VkPhysicalDevice, uint32_t, VkSurfaceKHR, VkBool32 *);
    VkBool32 (*p_vkGetPhysicalDeviceWin32PresentationSupportKHR)(VkPhysicalDevice, uint32_t);
    VkResult (*p_vkGetSwapchainImagesKHR)(VkDevice, VkSwapchainKHR, uint32_t *, VkImage *);
    VkResult (*p_vkQueuePresentKHR)(VkQueue, const VkPresentInfoKHR *);
};

extern const struct vulkan_funcs * CDECL __wine_get_vulkan_driver(HDC hdc, UINT version);

#endif /* __WINE_VULKAN_DRIVER_H */