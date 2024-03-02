#pragma once
#pragma warning (disable: 4838)

#include <windows.h>
#include <cstring>

#include "../../fn_common.h"
#include "../../math/fn_math_vec.h"

#define VK_USE_PLATFORM_WIN32_KHR
#define VK_NO_PROTOTYPES
#include "../vulkan/vulkan.h"

#define VK_CHECK(call) \
    do{ \
        VkResult result_ = call; \
        ASSERT(result_ == VK_SUCCESS); \
    } while(0)

#define internal static
#define local_persist static
#define global_variable static

struct vulkan_context
{
    u32 Width;
    u32 Height;

    u32 PresentQueueIndex;
    VkQueue PresentQueue;

    VkInstance Instance;

    VkSurfaceKHR Surface;
    VkSwapchainKHR SwapChain;

    VkImage* PresentImages;
    VkImage DepthImage;
    VkImageView DepthImageView;
    VkFramebuffer* FrameBuffers;
    
    VkPhysicalDevice PhysicalDevice;
    VkPhysicalDeviceProperties PhysicalDeviceProperties;
    VkPhysicalDeviceMemoryProperties MemoryProperties;

    VkDevice Device;

    VkCommandBuffer SetupCommandBuffer;
    VkCommandBuffer DrawCommandBuffer;

    VkRenderPass RenderPass;

    VkBuffer VertexInputBuffer;

    VkPipeline Pipeline;
    VkPipelineLayout PipelineLayout;
    VkDescriptorSet DescriptorSet;

    VkDebugReportCallbackEXT Callback;
};

global_variable vulkan_context context = {};
global_variable volatile bool applicationRunning = false;

PFN_vkCreateInstance vkCreateInstance = NULL;
PFN_vkEnumerateInstanceLayerProperties vkEnumerateInstanceLayerProperties = NULL;
PFN_vkEnumerateInstanceExtensionProperties vkEnumerateInstanceExtensionProperties = NULL;
PFN_vkGetInstanceProcAddr vkGetInstanceProcAddr = NULL;
PFN_vkEnumeratePhysicalDevices vkEnumeratePhysicalDevices = NULL;
PFN_vkGetPhysicalDeviceProperties vkGetPhysicalDeviceProperties = NULL;
PFN_vkGetPhysicalDeviceQueueFamilyProperties vkGetPhysicalDeviceQueueFamilyProperties = NULL;
PFN_vkCreateDevice vkCreateDevice = NULL;
PFN_vkGetDeviceQueue vkGetDeviceQueue = NULL;
PFN_vkCreateCommandPool vkCreateCommandPool = NULL;
PFN_vkAllocateCommandBuffers vkAllocateCommandBuffers = NULL;
PFN_vkCreateFence vkCreateFence = NULL;
PFN_vkBeginCommandBuffer vkBeginCommandBuffer = NULL;
PFN_vkCmdPipelineBarrier vkCmdPipelineBarrier = NULL;
PFN_vkEndCommandBuffer vkEndCommandBuffer = NULL;
PFN_vkQueueSubmit vkQueueSubmit = NULL;
PFN_vkWaitForFences vkWaitForFences = NULL;
PFN_vkResetFences vkResetFences = NULL;
PFN_vkResetCommandBuffer vkResetCommandBuffer = NULL;
PFN_vkCreateImageView vkCreateImageView = NULL;
PFN_vkCreateImage vkCreateImage = NULL;
PFN_vkGetImageMemoryRequirements vkGetImageMemoryRequirements = NULL;
PFN_vkGetPhysicalDeviceMemoryProperties vkGetPhysicalDeviceMemoryProperties = NULL;
PFN_vkAllocateMemory vkAllocateMemory = NULL;
PFN_vkBindImageMemory vkBindImageMemory = NULL;
PFN_vkCreateRenderPass vkCreateRenderPass = NULL;
PFN_vkCreateFramebuffer vkCreateFramebuffer = NULL;
PFN_vkCreateBuffer vkCreateBuffer = NULL;
PFN_vkGetBufferMemoryRequirements vkGetBufferMemoryRequirements = NULL;
PFN_vkMapMemory vkMapMemory = NULL;
PFN_vkUnmapMemory vkUnmapMemory = NULL;
PFN_vkBindBufferMemory vkBindBufferMemory = NULL;
PFN_vkCreateShaderModule vkCreateShaderModule = NULL;
PFN_vkCreatePipelineLayout vkCreatePipelineLayout = NULL;
PFN_vkCreateGraphicsPipelines vkCreateGraphicsPipelines = NULL;
PFN_vkCreateSemaphore vkCreateSemaphore = NULL;
PFN_vkCmdBeginRenderPass vkCmdBeginRenderPass = NULL;
PFN_vkCmdBindPipeline vkCmdBindPipeline = NULL;
PFN_vkCmdSetViewport vkCmdSetViewport = NULL;
PFN_vkCmdSetScissor vkCmdSetScissor = NULL;
PFN_vkCmdBindVertexBuffers vkCmdBindVertexBuffers = NULL;
PFN_vkCmdDraw vkCmdDraw = NULL;
PFN_vkCmdEndRenderPass vkCmdEndRenderPass = NULL;
PFN_vkDestroyFence vkDestroyFence = NULL;
PFN_vkDestroySemaphore vkDestroySemaphore = NULL;
PFN_vkCreateDescriptorSetLayout vkCreateDescriptorSetLayout = NULL;
PFN_vkCreateDescriptorPool vkCreateDescriptorPool = NULL;
PFN_vkAllocateDescriptorSets vkAllocateDescriptorSets = NULL;
PFN_vkUpdateDescriptorSets vkUpdateDescriptorSets = NULL;
PFN_vkCmdBindDescriptorSets vkCmdBindDescriptorSets = NULL;
PFN_vkFlushMappedMemoryRanges vkFlushMappedMemoryRanges = NULL;
PFN_vkCreateSampler vkCreateSampler = NULL;

PFN_vkCreateDebugReportCallbackEXT vkCreateDebugReportCallbackEXT = NULL;
PFN_vkDestroyDebugReportCallbackEXT vkDestroyDebugReportCallbackEXT = NULL; 
PFN_vkDebugReportMessageEXT vkDebugReportMessageEXT = NULL;

// win32 platform
PFN_vkCreateWin32SurfaceKHR vkCreateWin32SurfaceKHR = NULL;
PFN_vkGetPhysicalDeviceSurfaceSupportKHR vkGetPhysicalDeviceSurfaceSupportKHR = NULL;
PFN_vkGetPhysicalDeviceSurfaceFormatsKHR vkGetPhysicalDeviceSurfaceFormatsKHR = NULL;
PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR vkGetPhysicalDeviceSurfaceCapabilitiesKHR = NULL;
PFN_vkGetPhysicalDeviceSurfacePresentModesKHR vkGetPhysicalDeviceSurfacePresentModesKHR = NULL;

// swapchain extensions
PFN_vkCreateSwapchainKHR vkCreateSwapchainKHR = NULL;
PFN_vkGetSwapchainImagesKHR vkGetSwapchainImagesKHR = NULL;
PFN_vkAcquireNextImageKHR vkAcquireNextImageKHR = NULL;
PFN_vkQueuePresentKHR vkQueuePresentKHR = NULL;

