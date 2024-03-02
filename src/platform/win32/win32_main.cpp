#include "win32_main.h"

void Assert(bool flag, char *msg = "") 
{						
    if (!flag)
     {
        OutputDebugStringA( "ASSERT: " );
        OutputDebugStringA( msg );
        OutputDebugStringA( "\n" );
        int *base = 0;
        *base = 1;
    }  
}

internal void Win32LoadVulkan()
{
    HMODULE vulkanModule = LoadLibrary("vulkan-1.dll");
    Assert (vulkanModule, "Failed to load vulkan module");

    vkCreateInstance = (PFN_vkCreateInstance) GetProcAddress(vulkanModule, "vkCreateInstance");
    vkEnumerateInstanceLayerProperties = (PFN_vkEnumerateInstanceLayerProperties) GetProcAddress(vulkanModule, "vkEnumerateInstanceLayerProperties");
    vkEnumerateInstanceExtensionProperties = (PFN_vkEnumerateInstanceExtensionProperties) GetProcAddress(vulkanModule, "vkEnumerateInstanceExtensionProperties");
    vkGetInstanceProcAddr = (PFN_vkGetInstanceProcAddr) GetProcAddress( vulkanModule, "vkGetInstanceProcAddr" );
    vkEnumeratePhysicalDevices = (PFN_vkEnumeratePhysicalDevices) GetProcAddress( vulkanModule, "vkEnumeratePhysicalDevices" );
    vkGetPhysicalDeviceProperties = (PFN_vkGetPhysicalDeviceProperties) GetProcAddress( vulkanModule, "vkGetPhysicalDeviceProperties" );
    vkGetPhysicalDeviceQueueFamilyProperties = (PFN_vkGetPhysicalDeviceQueueFamilyProperties) GetProcAddress( vulkanModule, "vkGetPhysicalDeviceQueueFamilyProperties" );
    vkCreateDevice = (PFN_vkCreateDevice) GetProcAddress( vulkanModule, "vkCreateDevice" );
    vkGetDeviceQueue = (PFN_vkGetDeviceQueue) GetProcAddress( vulkanModule, "vkGetDeviceQueue" );
    vkCreateCommandPool = (PFN_vkCreateCommandPool) GetProcAddress( vulkanModule, "vkCreateCommandPool" );
    vkAllocateCommandBuffers = (PFN_vkAllocateCommandBuffers) GetProcAddress( vulkanModule, "vkAllocateCommandBuffers" );
    vkCreateFence = (PFN_vkCreateFence) GetProcAddress( vulkanModule, "vkCreateFence" );
    vkBeginCommandBuffer = (PFN_vkBeginCommandBuffer) GetProcAddress( vulkanModule, "vkBeginCommandBuffer" );
    vkCmdPipelineBarrier = (PFN_vkCmdPipelineBarrier) GetProcAddress( vulkanModule, "vkCmdPipelineBarrier" );
    vkEndCommandBuffer = (PFN_vkEndCommandBuffer) GetProcAddress( vulkanModule, "vkEndCommandBuffer" );
    vkQueueSubmit = (PFN_vkQueueSubmit) GetProcAddress( vulkanModule, "vkQueueSubmit" );
    vkWaitForFences = (PFN_vkWaitForFences) GetProcAddress( vulkanModule, "vkWaitForFences" );
    vkResetFences = (PFN_vkResetFences) GetProcAddress( vulkanModule, "vkResetFences" );
    vkResetCommandBuffer = (PFN_vkResetCommandBuffer) GetProcAddress( vulkanModule, "vkResetCommandBuffer" );
    vkCreateImageView = (PFN_vkCreateImageView) GetProcAddress( vulkanModule, "vkCreateImageView" );
    vkCreateImage = (PFN_vkCreateImage) GetProcAddress( vulkanModule, "vkCreateImage" );
    vkGetImageMemoryRequirements = (PFN_vkGetImageMemoryRequirements) GetProcAddress( vulkanModule, "vkGetImageMemoryRequirements" );
    vkGetPhysicalDeviceMemoryProperties = (PFN_vkGetPhysicalDeviceMemoryProperties) GetProcAddress( vulkanModule, "vkGetPhysicalDeviceMemoryProperties" );
    vkAllocateMemory = (PFN_vkAllocateMemory) GetProcAddress( vulkanModule, "vkAllocateMemory" );
    vkBindImageMemory = (PFN_vkBindImageMemory) GetProcAddress( vulkanModule, "vkBindImageMemory" );
    vkCreateRenderPass = (PFN_vkCreateRenderPass) GetProcAddress( vulkanModule, "vkCreateRenderPass" );
    vkCreateFramebuffer = (PFN_vkCreateFramebuffer) GetProcAddress( vulkanModule, "vkCreateFramebuffer" );
    vkCreateBuffer = (PFN_vkCreateBuffer) GetProcAddress( vulkanModule, "vkCreateBuffer" );
    vkGetBufferMemoryRequirements = (PFN_vkGetBufferMemoryRequirements) GetProcAddress( vulkanModule, "vkGetBufferMemoryRequirements" );
    vkMapMemory = (PFN_vkMapMemory) GetProcAddress( vulkanModule, "vkMapMemory" );
    vkUnmapMemory = (PFN_vkUnmapMemory) GetProcAddress( vulkanModule, "vkUnmapMemory" );
    vkBindBufferMemory = (PFN_vkBindBufferMemory) GetProcAddress( vulkanModule, "vkBindBufferMemory" );
    vkCreateShaderModule = (PFN_vkCreateShaderModule) GetProcAddress( vulkanModule, "vkCreateShaderModule" );
    vkCreatePipelineLayout = (PFN_vkCreatePipelineLayout) GetProcAddress( vulkanModule, "vkCreatePipelineLayout" );
    vkCreateGraphicsPipelines = (PFN_vkCreateGraphicsPipelines) GetProcAddress( vulkanModule, "vkCreateGraphicsPipelines" );
    vkCreateSemaphore = (PFN_vkCreateSemaphore) GetProcAddress( vulkanModule, "vkCreateSemaphore" );
    vkCmdBeginRenderPass = (PFN_vkCmdBeginRenderPass) GetProcAddress( vulkanModule, "vkCmdBeginRenderPass" );
    vkCmdBindPipeline = (PFN_vkCmdBindPipeline) GetProcAddress( vulkanModule, "vkCmdBindPipeline" );
    vkCmdSetViewport = (PFN_vkCmdSetViewport) GetProcAddress( vulkanModule, "vkCmdSetViewport" );
    vkCmdSetScissor = (PFN_vkCmdSetScissor) GetProcAddress( vulkanModule, "vkCmdSetScissor" );
    vkCmdBindVertexBuffers = (PFN_vkCmdBindVertexBuffers) GetProcAddress( vulkanModule, "vkCmdBindVertexBuffers" );
    vkCmdDraw = (PFN_vkCmdDraw) GetProcAddress( vulkanModule, "vkCmdDraw" );
    vkCmdEndRenderPass = (PFN_vkCmdEndRenderPass) GetProcAddress( vulkanModule, "vkCmdEndRenderPass" );
    vkDestroyFence = (PFN_vkDestroyFence) GetProcAddress( vulkanModule, "vkDestroyFence" );
    vkDestroySemaphore = (PFN_vkDestroySemaphore) GetProcAddress( vulkanModule, "vkDestroySemaphore" );
    vkCreateDescriptorSetLayout = (PFN_vkCreateDescriptorSetLayout) GetProcAddress( vulkanModule, "vkCreateDescriptorSetLayout" );
    vkCreateDescriptorPool = (PFN_vkCreateDescriptorPool) GetProcAddress( vulkanModule, "vkCreateDescriptorPool" );
    vkAllocateDescriptorSets = (PFN_vkAllocateDescriptorSets) GetProcAddress( vulkanModule, "vkAllocateDescriptorSets" );
    vkUpdateDescriptorSets = (PFN_vkUpdateDescriptorSets) GetProcAddress( vulkanModule, "vkUpdateDescriptorSets" );
    vkCmdBindDescriptorSets = (PFN_vkCmdBindDescriptorSets) GetProcAddress( vulkanModule, "vkCmdBindDescriptorSets" );
    vkFlushMappedMemoryRanges = (PFN_vkFlushMappedMemoryRanges) GetProcAddress( vulkanModule, "vkFlushMappedMemoryRanges" );
    vkCreateSampler = (PFN_vkCreateSampler) GetProcAddress( vulkanModule, "vkCreateSampler" );
}

internal void Win32LoadVulkanExtensions(VkInstance instance)
{
    *(void **)&vkCreateDebugReportCallbackEXT = vkGetInstanceProcAddr(instance, "vkCreateDebugReportCallbackEXT");
    *(void **)&vkDestroyDebugReportCallbackEXT = vkGetInstanceProcAddr(instance, "vkDestroyDebugReportCallbackEXT");
    *(void **)&vkDebugReportMessageEXT = vkGetInstanceProcAddr(instance, "vkDebugReportMessageEXT");

    *(void **)&vkCreateWin32SurfaceKHR = vkGetInstanceProcAddr(instance, "vkCreateWin32SurfaceKHR");
    *(void **)&vkGetPhysicalDeviceSurfaceSupportKHR = vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceSupportKHR");
    *(void **)&vkGetPhysicalDeviceSurfaceFormatsKHR = vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceFormatsKHR");
    *(void **)&vkGetPhysicalDeviceSurfaceCapabilitiesKHR = vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
    *(void **)&vkGetPhysicalDeviceSurfacePresentModesKHR = vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfacePresentModesKHR");
    *(void **)&vkCreateSwapchainKHR = vkGetInstanceProcAddr(instance, "vkCreateSwapchainKHR");
    *(void **)&vkGetSwapchainImagesKHR = vkGetInstanceProcAddr(instance, "vkGetSwapchainImagesKHR");
    *(void **)&vkAcquireNextImageKHR = vkGetInstanceProcAddr(instance, "vkAcquireNextImageKHR");
    *(void **)&vkQueuePresentKHR = vkGetInstanceProcAddr(instance, "vkQueuePresentKHR");
}

VKAPI_ATTR VkBool32 VKAPI_CALL MyDebugReportCallback(VkDebugReportFlagsEXT flags, 
    VkDebugReportObjectTypeEXT objectType, uint64_t object, size_t location, 
    int32_t messageCode, const char* pLayerPrefix, const char* pMessage, void* pUserData) 
{
    OutputDebugStringA(pLayerPrefix);
    OutputDebugStringA(" ");
    OutputDebugStringA(pMessage);
    OutputDebugStringA("\n");
    return VK_FALSE;
}

internal VkInstance CreateInstance(const char* applicationName)
{
    VkApplicationInfo appInfo = { VK_STRUCTURE_TYPE_APPLICATION_INFO };
    appInfo.pApplicationName = applicationName;
    appInfo.engineVersion = 1;
    appInfo.apiVersion = VK_API_VERSION_1_1;

    VkInstanceCreateInfo createInfo = { VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO };
    createInfo.pApplicationInfo = &appInfo;

    // Setup vulkan validation layers

    u32 layerCount = 0;
    // make a query for the total number of validation layers
    vkEnumerateInstanceLayerProperties(&layerCount, NULL);
    Assert(layerCount != 0, "Failed to locate any layers in the system");

    VkLayerProperties* layersAvailable = new VkLayerProperties[layerCount];
    vkEnumerateInstanceLayerProperties(&layerCount, layersAvailable);

    bool foundValidation = false;

    for (u32 i = 0; i < layerCount; i++)
    {
        if (strcmp(layersAvailable[i].layerName, "VK_LAYER_LUNARG_standard_validation") == 0)
        {
            foundValidation = true;
        }
    }

    delete[] layersAvailable;

    Assert(foundValidation, "Could not find validation layers");

    const char* debugLayers[] = { "VK_LAYER_LUNARG_standard_validation" };

    createInfo.enabledLayerCount = ARRAY_LENGTH(debugLayers);
    createInfo.ppEnabledLayerNames = debugLayers;

    u32 extensionCount = 0;
    vkEnumerateInstanceExtensionProperties(NULL, &extensionCount, NULL);
    VkExtensionProperties* extensionsAvailable = new VkExtensionProperties[extensionCount];
    vkEnumerateInstanceExtensionProperties(NULL, &extensionCount, extensionsAvailable);

    const char* extensions[] = { "VK_KHR_surface", "VK_KHR_win32_surface", "VK_EXT_debug_report" };

    u32 numberRequiredExtensions = ARRAY_LENGTH(extensions);
    u32 foundExtensions = 0;

    for (u32 i = 0; i < extensionCount; i++)
    {
        for (u32 j = 0; j < numberRequiredExtensions; j++)
        {
            if (strcmp(extensionsAvailable[i].extensionName, extensions[j] ) == 0) 
            {
                foundExtensions++;
            }
        }
    }

    Assert(foundExtensions == numberRequiredExtensions, "Could not find debug extension");

	createInfo.enabledExtensionCount = ARRAY_LENGTH(extensions);
    createInfo.ppEnabledExtensionNames = extensions;

    VkInstance instance = {};
    VK_CHECK(vkCreateInstance(&createInfo, 0, &instance));

    return instance;
}

internal VkDebugReportCallbackEXT CreateDebugReportCallback(VkInstance instance)
{
    VkDebugReportCallbackCreateInfoEXT callbackCreateInfo = { };
    callbackCreateInfo.sType = VK_STRUCTURE_TYPE_DEBUG_REPORT_CREATE_INFO_EXT;
    callbackCreateInfo.flags =  VK_DEBUG_REPORT_ERROR_BIT_EXT |
                                VK_DEBUG_REPORT_WARNING_BIT_EXT |
                                VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT;
    callbackCreateInfo.pfnCallback = &MyDebugReportCallback;
    callbackCreateInfo.pUserData = NULL;

    VkDebugReportCallbackEXT callback = {};
    VK_CHECK(vkCreateDebugReportCallbackEXT(instance, &callbackCreateInfo, NULL, &callback));

    return callback;
}

 // Create surface for rendering and connect it to the window
internal VkSurfaceKHR CreateSurface(VkInstance instance, HINSTANCE hInstance, HWND window)
{   
    VkWin32SurfaceCreateInfoKHR surfaceInfo = {VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR};
    surfaceInfo.hinstance = hInstance;
    surfaceInfo.hwnd = window;

    VkSurfaceKHR surface = {};
    VK_CHECK(vkCreateWin32SurfaceKHR(instance, &surfaceInfo, NULL, &surface));

    return surface;
}

internal void InitVulkan(HINSTANCE hInstance, HWND window, const char* applicationName)
{
    VkInstance instance = CreateInstance(applicationName);
    context.Instance = instance;

    Win32LoadVulkanExtensions(instance);

    context.Callback = CreateDebugReportCallback(instance);
    context.Surface = CreateSurface(instance, hInstance, window);

    u32 physicalDeviceCount = 0;
    // Query for amount of available physical devices (gpus on the system)
    vkEnumeratePhysicalDevices(context.Instance, &physicalDeviceCount, NULL);
    Assert(physicalDeviceCount > 0, "Failed to find GPUs with vulkan support on the system");

    VkPhysicalDevice* physicalDevices = new VkPhysicalDevice[physicalDeviceCount];

    // Fill the array with all avaialbe devices
    vkEnumeratePhysicalDevices(context.Instance, &physicalDeviceCount, physicalDevices);

    for (u32 i = 0; i < physicalDeviceCount; i++)
    {
        VkPhysicalDeviceProperties deviceProperties = {};
        vkGetPhysicalDeviceProperties(physicalDevices[i], &deviceProperties);

        u32 queueFamilyCount = 0;
        vkGetPhysicalDeviceQueueFamilyProperties(physicalDevices[i], &queueFamilyCount, NULL);
        Assert(queueFamilyCount > 0, "Failed to find queue families for physical device");

        VkQueueFamilyProperties* queueFamilyProperties = new VkQueueFamilyProperties[queueFamilyCount];
        vkGetPhysicalDeviceQueueFamilyProperties(physicalDevices[i], &queueFamilyCount, queueFamilyProperties);

        for (u32 j = 0; j < queueFamilyCount; j++)
        {
            VkBool32 supportsPresent;
            vkGetPhysicalDeviceSurfaceSupportKHR(physicalDevices[i], j, context.Surface, &supportsPresent);

            if (supportsPresent && (queueFamilyProperties[i].queueFlags & VK_QUEUE_GRAPHICS_BIT))
            {
                context.PhysicalDevice = physicalDevices[i];
                context.PhysicalDeviceProperties = deviceProperties;
                context.PresentQueueIndex = j;
                break;
            }
        }

        delete[] queueFamilyProperties;

        if (context.PhysicalDevice) break;
    }

    delete[] physicalDevices;
    Assert(context.PhysicalDevice, "No physical device was detected that can render and present");

    // Fill the physical device memory props
    vkGetPhysicalDeviceMemoryProperties(context.PhysicalDevice, &context.MemoryProperties);

    VkDeviceQueueCreateInfo queueCreateInfo = {};
    queueCreateInfo.sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
    queueCreateInfo.queueFamilyIndex = context.PresentQueueIndex;
    queueCreateInfo.queueCount = 1;
    float queuePriorities[] = { 1.0f };   // ask for highest priority for our queue. (range [0,1])
    queueCreateInfo.pQueuePriorities = queuePriorities;

    const char* debugLayers[] = { "VK_LAYER_LUNARG_standard_validation" };

    VkDeviceCreateInfo deviceInfo = {};
    deviceInfo.sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
    deviceInfo.queueCreateInfoCount = 1;
    deviceInfo.pQueueCreateInfos = &queueCreateInfo;
    deviceInfo.enabledLayerCount = 1;
    deviceInfo.ppEnabledLayerNames = debugLayers;

    const char* deviceExtensions[] = { "VK_KHR_swapchain" };
    deviceInfo.enabledExtensionCount = 1;
    deviceInfo.ppEnabledExtensionNames = deviceExtensions;

    VkPhysicalDeviceFeatures features = {};
    features.shaderClipDistance = VK_TRUE;
    deviceInfo.pEnabledFeatures = &features;

    VK_CHECK(vkCreateDevice(context.PhysicalDevice, &deviceInfo, NULL, &context.Device));

    // Get the device queue where rendering commands can be submitted to
    vkGetDeviceQueue(context.Device, context.PresentQueueIndex, 0, &context.PresentQueue);

    // Create a command pool where the commandbuffers can be allocated.
    VkCommandPoolCreateInfo commandPoolCreateInfo = {};
    commandPoolCreateInfo.sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
    commandPoolCreateInfo.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
    commandPoolCreateInfo.queueFamilyIndex = context.PresentQueueIndex;

    VkCommandPool commandPool;
    VK_CHECK(vkCreateCommandPool(context.Device, &commandPoolCreateInfo, NULL, &commandPool));

    // Create the command buffers
    VkCommandBufferAllocateInfo commandBufferAllocationInfo = {};
    commandBufferAllocationInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
    commandBufferAllocationInfo.commandPool = commandPool;
    commandBufferAllocationInfo.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    commandBufferAllocationInfo.commandBufferCount = 1;

    VK_CHECK(vkAllocateCommandBuffers(context.Device, &commandBufferAllocationInfo, &context.SetupCommandBuffer));
    VK_CHECK(vkAllocateCommandBuffers(context.Device, &commandBufferAllocationInfo, &context.DrawCommandBuffer));

    // Setup color space and color format
    u32 formatCount = 0;
    VK_CHECK(vkGetPhysicalDeviceSurfaceFormatsKHR(context.PhysicalDevice, context.Surface, &formatCount, NULL));

    VkSurfaceFormatKHR* surfaceFormats = new VkSurfaceFormatKHR[formatCount];
    VK_CHECK(vkGetPhysicalDeviceSurfaceFormatsKHR(context.PhysicalDevice, context.Surface, &formatCount, surfaceFormats));

    VkFormat colorFormat = (formatCount == 1 && surfaceFormats[0].format == VK_FORMAT_UNDEFINED) ? 
        VK_FORMAT_B8G8R8_UNORM : surfaceFormats[0].format;

    VkColorSpaceKHR colorSpace = surfaceFormats[0].colorSpace;
    delete[] surfaceFormats;

    // Check the capabilities of the surface in order to find out how many frame buffers to ask for
    VkSurfaceCapabilitiesKHR surfaceCapabilities = {};
    VK_CHECK(vkGetPhysicalDeviceSurfaceCapabilitiesKHR(context.PhysicalDevice, context.Surface, &surfaceCapabilities));

    // Try to achieve double buffering
    u32 desiredImageCount = 2;

    if (desiredImageCount < surfaceCapabilities.minImageCount)
    {
        desiredImageCount = surfaceCapabilities.minImageCount;
    }
    else if (surfaceCapabilities.maxImageCount != 0 && 
        desiredImageCount > surfaceCapabilities.maxImageCount)
    {
        desiredImageCount = surfaceCapabilities.maxImageCount;
    }

    VkExtent2D resolution = surfaceCapabilities.currentExtent;

    if (resolution.width == -1) 
    {
        resolution.width  = context.Width;
        resolution.height = context.Height;
    }
    else
    {
        context.Width  = resolution.width;
        context.Height = resolution.height;
    }

    VkSurfaceTransformFlagBitsKHR preTransform = surfaceCapabilities.currentTransform;

    if (surfaceCapabilities.supportedTransforms & VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR)
    {
        preTransform = VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR;
    }

    // Setup presentation mode

    u32 presentationModeCount = 0;
    VK_CHECK(vkGetPhysicalDeviceSurfacePresentModesKHR(context.PhysicalDevice, context.Surface, &presentationModeCount, NULL));

    VkPresentModeKHR* presentationModes = new VkPresentModeKHR[presentationModeCount];
    VK_CHECK(vkGetPhysicalDeviceSurfacePresentModesKHR(context.PhysicalDevice, context.Surface, &presentationModeCount, presentationModes));

    //VK_PRESENT_MODE_FIFO_KHR is always present and will keep a queue, 
    // do v-sync and won't screen tear if a frame is late
    VkPresentModeKHR presentationMode = VK_PRESENT_MODE_FIFO_KHR;

    for (u32 i = 0; i < presentationModeCount; i++)
    {
        // VK_PRESENT_MODE_MAILBOX_KHR has a single entry queue for presentation 
        // and removes one entry at every v-sync (as long as the queue is not empty).
        // When a frame is committed it replaces the previous
        if (presentationModes[i] == VK_PRESENT_MODE_MAILBOX_KHR) 
        {
            presentationMode = VK_PRESENT_MODE_MAILBOX_KHR;
            break;
        }
    }

    delete[] presentationModes;

    // Create the swap chain

    VkSwapchainCreateInfoKHR swapChainCreateInfo = {};
    swapChainCreateInfo.sType = VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR;
    swapChainCreateInfo.surface = context.Surface;
    swapChainCreateInfo.minImageCount = desiredImageCount;
    swapChainCreateInfo.imageFormat = colorFormat;
    swapChainCreateInfo.imageColorSpace = colorSpace;
    swapChainCreateInfo.imageExtent = resolution;
    swapChainCreateInfo.imageArrayLayers = 1;
    swapChainCreateInfo.imageUsage = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT;
    swapChainCreateInfo.imageSharingMode = VK_SHARING_MODE_EXCLUSIVE;
    swapChainCreateInfo.preTransform = preTransform;
    swapChainCreateInfo.compositeAlpha = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR;
    swapChainCreateInfo.presentMode = presentationMode;
    swapChainCreateInfo.clipped = true; 
    swapChainCreateInfo.oldSwapchain = NULL;

    VK_CHECK(vkCreateSwapchainKHR(context.Device, &swapChainCreateInfo, NULL, &context.SwapChain));

    // Get the images created by the swap chain and store them in the context
    u32 imageCount = 0;
    vkGetSwapchainImagesKHR(context.Device, context.SwapChain, &imageCount, NULL);
    context.PresentImages = new VkImage[imageCount];
    vkGetSwapchainImagesKHR(context.Device, context.SwapChain, &imageCount, context.PresentImages);

    // Create image views for the swap chains image buffers. VkImageView is needed to get access to the image data
    VkImageViewCreateInfo presentImagesViewCreateInfo = {};
    presentImagesViewCreateInfo.sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
    presentImagesViewCreateInfo.viewType = VK_IMAGE_VIEW_TYPE_2D;
    presentImagesViewCreateInfo.format = colorFormat;
    presentImagesViewCreateInfo.components = { VK_COMPONENT_SWIZZLE_R, VK_COMPONENT_SWIZZLE_G, VK_COMPONENT_SWIZZLE_B, VK_COMPONENT_SWIZZLE_A };
    presentImagesViewCreateInfo.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    presentImagesViewCreateInfo.subresourceRange.baseMipLevel = 0;
    presentImagesViewCreateInfo.subresourceRange.levelCount = 1;
    presentImagesViewCreateInfo.subresourceRange.baseArrayLayer = 0;
    presentImagesViewCreateInfo.subresourceRange.layerCount = 1;

    VkCommandBufferBeginInfo beginInfo = {};
    beginInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
    beginInfo.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;

    VkFenceCreateInfo fenceCreateInfo = {};
    fenceCreateInfo.sType = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO;
    VkFence submitFence;
    VK_CHECK(vkCreateFence(context.Device, &fenceCreateInfo, NULL, &submitFence));

    // Change image layout on the swap chain from VK_IMAGE_LAYOUT_UNDEFINED  to VK_IMAGE_LAYOUT_PRESENT_SRC_KHR 

    bool* transitioned = new bool[imageCount];
    memset(transitioned, 0, sizeof(bool) * imageCount);
    u32 doneCount = 0;

    while (doneCount != imageCount)
    {
        VkSemaphore presentCompleteSemaphore;
        VkSemaphoreCreateInfo semaphoreCreateInfo = { VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO, 0, 0 };
        VK_CHECK(vkCreateSemaphore(context.Device, &semaphoreCreateInfo, NULL, &presentCompleteSemaphore));

        u32 nextImageIndex;
        vkAcquireNextImageKHR(context.Device, context.SwapChain, UINT64_MAX, presentCompleteSemaphore, VK_NULL_HANDLE, &nextImageIndex);

        if (!transitioned[nextImageIndex])
        {
            // Start recording out image layout change barrier on the setup command buffer
            vkBeginCommandBuffer(context.SetupCommandBuffer, &beginInfo);

            VkImageMemoryBarrier layoutTransitionBarrier = {};
            layoutTransitionBarrier.sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
            layoutTransitionBarrier.srcAccessMask = 0;
            layoutTransitionBarrier.dstAccessMask = VK_ACCESS_MEMORY_READ_BIT;
            layoutTransitionBarrier.oldLayout = VK_IMAGE_LAYOUT_UNDEFINED;
            layoutTransitionBarrier.newLayout = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
            layoutTransitionBarrier.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
            layoutTransitionBarrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
            layoutTransitionBarrier.image = context.PresentImages[nextImageIndex];
            VkImageSubresourceRange resourceRange = { VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1 };
            layoutTransitionBarrier.subresourceRange = resourceRange;

            vkCmdPipelineBarrier(context.SetupCommandBuffer, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, 
                VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, 0, 0, NULL, 0, NULL, 1, &layoutTransitionBarrier);

            vkEndCommandBuffer(context.SetupCommandBuffer);    

            //Submit command to the queue
            VkPipelineStageFlags waitStageMash[] = { VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT };
            VkSubmitInfo submitInfo = {};
            submitInfo.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
            submitInfo.waitSemaphoreCount = 1;
            submitInfo.pWaitSemaphores = &presentCompleteSemaphore;
            submitInfo.pWaitDstStageMask = waitStageMash;
            submitInfo.commandBufferCount = 1;
            submitInfo.pCommandBuffers = &context.SetupCommandBuffer;
            submitInfo.signalSemaphoreCount = 0;
            submitInfo.pSignalSemaphores = NULL;

            VK_CHECK(vkQueueSubmit(context.PresentQueue, 1, &submitInfo, submitFence));

            // Wait for the command to finish
            vkWaitForFences(context.Device, 1, &submitFence, VK_TRUE, UINT64_MAX);
            vkResetFences(context.Device, 1, &submitFence);

            vkDestroySemaphore(context.Device, presentCompleteSemaphore, NULL);

            vkResetCommandBuffer(context.SetupCommandBuffer, 0);
            transitioned[nextImageIndex] = true;
            doneCount++; 
        }

        VkPresentInfoKHR presentInfo = {};
        presentInfo.sType = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
        presentInfo.waitSemaphoreCount = 0;
        presentInfo.pWaitSemaphores = NULL;
        presentInfo.swapchainCount = 1;
        presentInfo.pSwapchains = &context.SwapChain;
        presentInfo.pImageIndices = &nextImageIndex;

        vkQueuePresentKHR(context.PresentQueue, &presentInfo);
    }

    delete[] transitioned;

    // Create the image views
    VkImageView* presentImageViews = new VkImageView[imageCount];

    for (u32 i = 0; i < imageCount; i++)
    {
        presentImagesViewCreateInfo.image = context.PresentImages[i];
        VK_CHECK(vkCreateImageView(context.Device, &presentImagesViewCreateInfo, NULL, &presentImageViews[i]));
    }

    VkImageCreateInfo imageCreateInfo = {};
    imageCreateInfo.sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
    imageCreateInfo.imageType = VK_IMAGE_TYPE_2D;
    imageCreateInfo.format = VK_FORMAT_D16_UNORM;                          
    imageCreateInfo.extent = { context.Width, context.Height, 1 };
    imageCreateInfo.mipLevels = 1;
    imageCreateInfo.arrayLayers = 1;
    imageCreateInfo.samples = VK_SAMPLE_COUNT_1_BIT;                       
    imageCreateInfo.tiling = VK_IMAGE_TILING_OPTIMAL;
    imageCreateInfo.usage = VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT;   
    imageCreateInfo.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
    imageCreateInfo.queueFamilyIndexCount = 0;
    imageCreateInfo.pQueueFamilyIndices = NULL;
    imageCreateInfo.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;

    VK_CHECK(vkCreateImage(context.Device, &imageCreateInfo, NULL, &context.DepthImage));

    VkMemoryRequirements memoryRequirements = {};
    vkGetImageMemoryRequirements(context.Device, context.DepthImage, &memoryRequirements);

    VkMemoryAllocateInfo imageAllocateInfo = {};
    imageAllocateInfo.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
    imageAllocateInfo.allocationSize = memoryRequirements.size;

    // memoryTypeBits is a bitfield where if bit i is set, it means that 
    // the VkMemoryType i of the VkPhysicalDeviceMemoryProperties structure 
    // satisfies the memory requirements
    u32 memoryTypeBits = memoryRequirements.memoryTypeBits;
    VkMemoryPropertyFlags desiredMemoryFlags = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT;

    for (u32 i = 0; i < 32; i++)
    {
        VkMemoryType memoryType = context.MemoryProperties.memoryTypes[i];

        if (memoryTypeBits & 1)
        {
            if ((memoryType.propertyFlags & desiredMemoryFlags) == desiredMemoryFlags)
            {
                imageAllocateInfo.memoryTypeIndex = i;
                break;
            }
        }

        memoryTypeBits = memoryTypeBits >> 1;
    }

    VkDeviceMemory imageMemory = {};
    VK_CHECK(vkAllocateMemory(context.Device, &imageAllocateInfo, NULL, &imageMemory));
    VK_CHECK(vkBindImageMemory(context.Device, context.DepthImage, imageMemory, 0));

    // Must change image layout for the Depth image before it can be used

    {
        VkCommandBufferBeginInfo beginInfo = {};
        beginInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
        beginInfo.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;

        vkBeginCommandBuffer(context.SetupCommandBuffer, &beginInfo);

        VkImageMemoryBarrier layoutTransitionBarrier = {};
        layoutTransitionBarrier.sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
        layoutTransitionBarrier.srcAccessMask = 0;
        layoutTransitionBarrier.dstAccessMask = VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT | VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT;
        layoutTransitionBarrier.oldLayout = VK_IMAGE_LAYOUT_UNDEFINED;
        layoutTransitionBarrier.newLayout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
        layoutTransitionBarrier.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        layoutTransitionBarrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        layoutTransitionBarrier.image = context.DepthImage;
        VkImageSubresourceRange resourceRange = { VK_IMAGE_ASPECT_DEPTH_BIT, 0, 1, 0, 1 };
        layoutTransitionBarrier.subresourceRange = resourceRange;

        vkCmdPipelineBarrier(context.SetupCommandBuffer, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, 
            VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT, 0, 0, NULL, 0, NULL, 1, &layoutTransitionBarrier);

        vkEndCommandBuffer(context.SetupCommandBuffer);

        VkPipelineStageFlags waitStageMask[] = { VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT };
        VkSubmitInfo submitInfo = {};
        submitInfo.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
        submitInfo.waitSemaphoreCount = 0;
        submitInfo.pWaitSemaphores = NULL;
        submitInfo.pWaitDstStageMask = waitStageMask;
        submitInfo.commandBufferCount = 1;
        submitInfo.pCommandBuffers = &context.SetupCommandBuffer;
        submitInfo.signalSemaphoreCount = 0;
        submitInfo.pSignalSemaphores = NULL;

        VK_CHECK(vkQueueSubmit(context.PresentQueue, 1, &submitInfo, submitFence));

        vkWaitForFences(context.Device, 1, &submitFence, VK_TRUE, UINT64_MAX);
        vkResetFences(context.Device, 1, &submitFence);
        vkResetCommandBuffer(context.SetupCommandBuffer, 0);
    }

    // Create the depth image view
    VkImageAspectFlags aspectMask = VK_IMAGE_ASPECT_DEPTH_BIT;
    VkImageViewCreateInfo imageViewCreateInfo = {};
    imageViewCreateInfo.sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
    imageViewCreateInfo.image = context.DepthImage;
    imageViewCreateInfo.viewType = VK_IMAGE_VIEW_TYPE_2D;
    imageViewCreateInfo.format = imageCreateInfo.format;
    imageViewCreateInfo.components = { VK_COMPONENT_SWIZZLE_IDENTITY, VK_COMPONENT_SWIZZLE_IDENTITY, 
                                    VK_COMPONENT_SWIZZLE_IDENTITY, VK_COMPONENT_SWIZZLE_IDENTITY };
    imageViewCreateInfo.subresourceRange.aspectMask = aspectMask;
    imageViewCreateInfo.subresourceRange.baseMipLevel = 0;
    imageViewCreateInfo.subresourceRange.levelCount = 1;
    imageViewCreateInfo.subresourceRange.baseArrayLayer = 0;
    imageViewCreateInfo.subresourceRange.layerCount = 1;

    VK_CHECK(vkCreateImageView(context.Device, &imageViewCreateInfo, NULL, &context.DepthImageView));

    // Create the render pass and define what kind of framebuffers and pipelines it can support
    VkAttachmentDescription passAttachments[2] = { };
    passAttachments[0].format = colorFormat;
    passAttachments[0].samples = VK_SAMPLE_COUNT_1_BIT;
    passAttachments[0].loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
    passAttachments[0].storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    passAttachments[0].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
    passAttachments[0].stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    passAttachments[0].initialLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    passAttachments[0].finalLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;

    passAttachments[1].format = VK_FORMAT_D16_UNORM;
    passAttachments[1].samples = VK_SAMPLE_COUNT_1_BIT;
    passAttachments[1].loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
    passAttachments[1].storeOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    passAttachments[1].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
    passAttachments[1].stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    passAttachments[1].initialLayout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
    passAttachments[1].finalLayout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;

    VkAttachmentReference colorAttachmentReference = {};
    colorAttachmentReference.attachment = 0;
    colorAttachmentReference.layout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;

    VkAttachmentReference depthAttachmentReference = {};
    depthAttachmentReference.attachment = 1;
    depthAttachmentReference.layout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;

    VkSubpassDescription subpass = {};
    subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
    subpass.colorAttachmentCount = 1;
    subpass.pColorAttachments = &colorAttachmentReference;
    subpass.pDepthStencilAttachment = &depthAttachmentReference;

    VkRenderPassCreateInfo renderPassCreateInfo = {};
    renderPassCreateInfo.sType = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;
    renderPassCreateInfo.attachmentCount = 2;
    renderPassCreateInfo.pAttachments = passAttachments;
    renderPassCreateInfo.subpassCount = 1;
    renderPassCreateInfo.pSubpasses = &subpass;

    VK_CHECK(vkCreateRenderPass(context.Device, &renderPassCreateInfo, NULL, &context.RenderPass));

    // Create the framebuffers
    VkImageView frameBufferAttachments[2];
    frameBufferAttachments[1] = context.DepthImageView;

    VkFramebufferCreateInfo frameBufferCreateInfo = {};
    frameBufferCreateInfo.sType = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
    frameBufferCreateInfo.renderPass = context.RenderPass;
    // must be equal to the attachment count on render pass
    frameBufferCreateInfo.attachmentCount = 2;  
    frameBufferCreateInfo.pAttachments = frameBufferAttachments;
    frameBufferCreateInfo.width = context.Width;
    frameBufferCreateInfo.height = context.Height;
    frameBufferCreateInfo.layers = 1;

    context.FrameBuffers = new VkFramebuffer[imageCount];

    // Create one framebuffer for each swap chain imageView
    for (u32 i = 0; i < imageCount; i++)
    {
        frameBufferAttachments[0] = presentImageViews[i];
        VK_CHECK(vkCreateFramebuffer(context.Device, &frameBufferCreateInfo, NULL, &context.FrameBuffers[i]));
    }

    // Create vertex buffer
    VkBufferCreateInfo vertexInputBufferInfo = {};
    vertexInputBufferInfo.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
    // size in Bytes
    vertexInputBufferInfo.size = sizeof(vec4) * 3; 
    vertexInputBufferInfo.usage = VK_BUFFER_USAGE_VERTEX_BUFFER_BIT;
    vertexInputBufferInfo.sharingMode = VK_SHARING_MODE_EXCLUSIVE;

    VK_CHECK(vkCreateBuffer(context.Device, &vertexInputBufferInfo, NULL, &context.VertexInputBuffer));

    VkMemoryRequirements vertexBufferMemoryRequirements = {};
    vkGetBufferMemoryRequirements(context.Device, context.VertexInputBuffer, &vertexBufferMemoryRequirements);

    VkMemoryAllocateInfo bufferAllocateInfo = {};
    bufferAllocateInfo.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
    bufferAllocateInfo.allocationSize = vertexBufferMemoryRequirements.size;

    u32 vertexMemoryTypeBits = vertexBufferMemoryRequirements.memoryTypeBits;
    VkMemoryPropertyFlags vertexDesiredMemoryFlags = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT;

    for (u32 i = 0; i < 32; i++)
    {
        VkMemoryType memoryType = context.MemoryProperties.memoryTypes[i];
        if (vertexMemoryTypeBits & 1)
        {
            if ((memoryType.propertyFlags & vertexDesiredMemoryFlags) == vertexDesiredMemoryFlags)
            {
                bufferAllocateInfo.memoryTypeIndex = i;
                break;
            }
        }
        vertexMemoryTypeBits = vertexMemoryTypeBits >> 1;
    }

    VkDeviceMemory vertexBufferMemory;
    VK_CHECK(vkAllocateMemory(context.Device, &bufferAllocateInfo, NULL, &vertexBufferMemory));

    // In order for the host to write to the vertex buffer memory a host virtual address pointer 
    // to a mappabale memory object must be obtained via a call to vkMapMemory

    void* mappedMemory;
    VK_CHECK(vkMapMemory(context.Device, vertexBufferMemory, 0, VK_WHOLE_SIZE, 0, &mappedMemory));

    vec4* triangle = (vec4*)mappedMemory;
    vec4 v1 = { -1.0f, -1.0f, 0, 1.0f };
    vec4 v2 = { 1.0f, -1.0f, 0, 1.0f };
    vec4 v3 = { 0.0f, 1.0f, 0, 1.0f };
    triangle[0] = v1;
    triangle[1] = v2;
    triangle[2] = v3;

    vkUnmapMemory(context.Device, vertexBufferMemory);

    VK_CHECK(vkBindBufferMemory(context.Device, context.VertexInputBuffer, vertexBufferMemory, 0));

    u32 codeSize;
    char* code = new char[10000];
    
    HANDLE fileHandle = CreateFile("..\\..\\..\\res\\shaders\\spv\\basic_vertex_shader.spv", GENERIC_READ, 0, 
        NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);

    if (fileHandle == INVALID_HANDLE_VALUE)
    {
        OutputDebugStringA("Failed to load vertex shader");
        exit(1);
    }

    ReadFile((HANDLE)fileHandle, code, 10000, (LPDWORD)&codeSize, 0);
    CloseHandle(fileHandle);

    VkShaderModuleCreateInfo vertexShaderCreationInfo = {};
    vertexShaderCreationInfo.sType = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
    vertexShaderCreationInfo.codeSize = codeSize;
    vertexShaderCreationInfo.pCode = (uint32_t *)code;

    VkShaderModule vertexShaderModule;
    VK_CHECK(vkCreateShaderModule(context.Device, &vertexShaderCreationInfo, NULL, &vertexShaderModule));

    fileHandle = CreateFile("..\\..\\..\\res\\shaders\\spv\\basic_frag_shader.spv", GENERIC_READ, 0, 
        NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);

    if (fileHandle == INVALID_HANDLE_VALUE)
    {
        OutputDebugStringA("Failed to load fragment shader");
        exit(1);
    }

    ReadFile((HANDLE)fileHandle, code, 10000, (LPDWORD)&codeSize, 0);
    CloseHandle(fileHandle);

    VkShaderModuleCreateInfo fragmentShaderCreationInfo = {};
    fragmentShaderCreationInfo.sType = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
    fragmentShaderCreationInfo.codeSize = codeSize;
    fragmentShaderCreationInfo.pCode = (uint32_t *)code;

    VkShaderModule fragmentShaderModule;
    VK_CHECK(vkCreateShaderModule(context.Device, &fragmentShaderCreationInfo, NULL, &fragmentShaderModule));

    // Setup the Graphics pipeline

    VkPipelineLayoutCreateInfo layoutCreateInfo = {};
    layoutCreateInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
    layoutCreateInfo.setLayoutCount = 0;
    layoutCreateInfo.pSetLayouts = NULL;
    layoutCreateInfo.pushConstantRangeCount = 0;
    layoutCreateInfo.pPushConstantRanges = NULL;

    VK_CHECK(vkCreatePipelineLayout(context.Device, &layoutCreateInfo, NULL, &context.PipelineLayout));

    // Shader stage setup, connect the shader modules to the shader pipeline stage
    VkPipelineShaderStageCreateInfo shaderStageCreateInfo[2] = {};
    shaderStageCreateInfo[0].sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    shaderStageCreateInfo[0].stage = VK_SHADER_STAGE_VERTEX_BIT;
    shaderStageCreateInfo[0].module = vertexShaderModule;
    shaderStageCreateInfo[0].pName = "main"; // entry point for shader program
    shaderStageCreateInfo[0].pSpecializationInfo = NULL;

    shaderStageCreateInfo[1].sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    shaderStageCreateInfo[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT;
    shaderStageCreateInfo[1].module = fragmentShaderModule;
    shaderStageCreateInfo[1].pName = "main"; // entry point for the shader program
    shaderStageCreateInfo[1].pSpecializationInfo = NULL;

    VkVertexInputBindingDescription vertexBindingDesc = {};
    vertexBindingDesc.binding = 0;
    vertexBindingDesc.stride = sizeof(vec4);
    vertexBindingDesc.inputRate = VK_VERTEX_INPUT_RATE_VERTEX;

    VkVertexInputAttributeDescription vertexAttributeDesc = {};
    vertexAttributeDesc.location = 0;
    vertexAttributeDesc.binding = 0;
    vertexAttributeDesc.format = VK_FORMAT_R32G32B32A32_SFLOAT;
    vertexAttributeDesc.offset = 0;

    VkPipelineVertexInputStateCreateInfo vertexInputStateCreateInfo = {};
    vertexInputStateCreateInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;
    vertexInputStateCreateInfo.vertexBindingDescriptionCount = 1;
    vertexInputStateCreateInfo.pVertexBindingDescriptions = &vertexBindingDesc;
    vertexInputStateCreateInfo.vertexAttributeDescriptionCount = 1;
    vertexInputStateCreateInfo.pVertexAttributeDescriptions = &vertexAttributeDesc;

    // Configure the vertex topology to interpret vertex buffer as triangle list
    VkPipelineInputAssemblyStateCreateInfo inputAssemblyStateCreateInfo = {};
    inputAssemblyStateCreateInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
    inputAssemblyStateCreateInfo.topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
    inputAssemblyStateCreateInfo.primitiveRestartEnable = VK_FALSE;

    VkViewport viewport = {};
    viewport.x = 0;
    viewport.y = 0;
    viewport.width = context.Width;
    viewport.height = context.Height;
    viewport.minDepth = 0;
    viewport.maxDepth = 1;

    VkRect2D scissors = {};
    scissors.offset = { 0, 0 };
    scissors.extent = { context.Width, context.Height };

    VkPipelineViewportStateCreateInfo viewportState = {};
    viewportState.sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;
    viewportState.viewportCount = 1;
    viewportState.pViewports = &viewport;
    viewportState.scissorCount = 1;
    viewportState.pScissors = &scissors;

    VkPipelineRasterizationStateCreateInfo rasterizationState = {};
    rasterizationState.sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
    rasterizationState.depthClampEnable = VK_FALSE;
    rasterizationState.rasterizerDiscardEnable = VK_FALSE;
    rasterizationState.polygonMode = VK_POLYGON_MODE_FILL;
    rasterizationState.cullMode = VK_CULL_MODE_NONE;
    rasterizationState.frontFace = VK_FRONT_FACE_COUNTER_CLOCKWISE;
    rasterizationState.depthBiasEnable = VK_FALSE;
    rasterizationState.depthBiasConstantFactor = 0;
    rasterizationState.depthBiasClamp = 0;
    rasterizationState.depthBiasSlopeFactor = 0;
    rasterizationState.lineWidth = 1;

    VkPipelineMultisampleStateCreateInfo multisampleState = {};
    multisampleState.sType = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
    multisampleState.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;
    multisampleState.sampleShadingEnable = VK_FALSE;
    multisampleState.minSampleShading = 0;
    multisampleState.pSampleMask = NULL;
    multisampleState.alphaToCoverageEnable = VK_FALSE;
    multisampleState.alphaToOneEnable = VK_FALSE;

    VkStencilOpState noOPStencilState = {};
    noOPStencilState.failOp = VK_STENCIL_OP_KEEP;
    noOPStencilState.passOp = VK_STENCIL_OP_KEEP;
    noOPStencilState.depthFailOp = VK_STENCIL_OP_KEEP;
    noOPStencilState.compareOp = VK_COMPARE_OP_ALWAYS;
    noOPStencilState.compareMask = 0;
    noOPStencilState.writeMask = 0;
    noOPStencilState.reference = 0;

    VkPipelineDepthStencilStateCreateInfo depthState = {};
    depthState.sType = VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO;
    depthState.depthTestEnable = VK_TRUE;
    depthState.depthWriteEnable = VK_TRUE;
    depthState.depthCompareOp = VK_COMPARE_OP_LESS_OR_EQUAL;
    depthState.depthBoundsTestEnable = VK_FALSE;
    depthState.stencilTestEnable = VK_FALSE;
    depthState.front = noOPStencilState;
    depthState.back = noOPStencilState;
    depthState.minDepthBounds = 0;
    depthState.maxDepthBounds = 0;

    VkPipelineColorBlendAttachmentState colorBlendAttachmentState = {};
    colorBlendAttachmentState.blendEnable = VK_FALSE;
    colorBlendAttachmentState.srcColorBlendFactor = VK_BLEND_FACTOR_SRC_COLOR;
    colorBlendAttachmentState.dstColorBlendFactor = VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR;
    colorBlendAttachmentState.colorBlendOp = VK_BLEND_OP_ADD;
    colorBlendAttachmentState.srcAlphaBlendFactor = VK_BLEND_FACTOR_ZERO;
    colorBlendAttachmentState.dstAlphaBlendFactor = VK_BLEND_FACTOR_ZERO;
    colorBlendAttachmentState.alphaBlendOp = VK_BLEND_OP_ADD;
    colorBlendAttachmentState.colorWriteMask = 0xf;

    VkPipelineColorBlendStateCreateInfo colorBlendState = {};
    colorBlendState.sType = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
    colorBlendState.logicOpEnable = VK_FALSE;
    colorBlendState.logicOp = VK_LOGIC_OP_CLEAR;
    colorBlendState.attachmentCount = 1;
    colorBlendState.pAttachments = &colorBlendAttachmentState;
    colorBlendState.blendConstants[0] = 0.0;
    colorBlendState.blendConstants[1] = 0.0;
    colorBlendState.blendConstants[2] = 0.0;
    colorBlendState.blendConstants[3] = 0.0;

    // Change viewport and scissor states to be dynamic since we might want to change them during runtime
    VkDynamicState dynamicState[2] = { VK_DYNAMIC_STATE_VIEWPORT, VK_DYNAMIC_STATE_SCISSOR };
    VkPipelineDynamicStateCreateInfo dynamicStateCreateInfo = {};
    dynamicStateCreateInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;
    dynamicStateCreateInfo.dynamicStateCount = 2;
    dynamicStateCreateInfo.pDynamicStates = dynamicState;

    // Final step, Create the graphics pipeline with all states

    VkGraphicsPipelineCreateInfo pipelineCreateInfo = {};
    pipelineCreateInfo.sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
    pipelineCreateInfo.stageCount = 2;
    pipelineCreateInfo.pStages = shaderStageCreateInfo;
    pipelineCreateInfo.pVertexInputState = &vertexInputStateCreateInfo;
    pipelineCreateInfo.pInputAssemblyState = &inputAssemblyStateCreateInfo;
    pipelineCreateInfo.pTessellationState = NULL;
    pipelineCreateInfo.pViewportState = &viewportState;
    pipelineCreateInfo.pRasterizationState = &rasterizationState;
    pipelineCreateInfo.pMultisampleState = &multisampleState;
    pipelineCreateInfo.pDepthStencilState = &depthState;
    pipelineCreateInfo.pColorBlendState = &colorBlendState;
    pipelineCreateInfo.pDynamicState = &dynamicStateCreateInfo;
    pipelineCreateInfo.layout = context.PipelineLayout;
    pipelineCreateInfo.renderPass = context.RenderPass;
    pipelineCreateInfo.subpass = 0;
    pipelineCreateInfo.basePipelineHandle = NULL;
    pipelineCreateInfo.basePipelineIndex = 0;

    VK_CHECK(vkCreateGraphicsPipelines(context.Device, VK_NULL_HANDLE, 1, &pipelineCreateInfo, NULL, &context.Pipeline));
}

internal void Render()
{
    VkSemaphore presentCompleteSemaphore;
    VkSemaphore renderCompleteSemaphore;

    VkSemaphoreCreateInfo semaphoreCreateInfo = { VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO, 0, 0 };
    vkCreateSemaphore(context.Device, &semaphoreCreateInfo, NULL, &presentCompleteSemaphore);
    vkCreateSemaphore(context.Device, &semaphoreCreateInfo, NULL, &renderCompleteSemaphore);

    u32 nextImageIndex;
    vkAcquireNextImageKHR(context.Device, context.SwapChain, 
            UINT64_MAX, presentCompleteSemaphore, VK_NULL_HANDLE, &nextImageIndex);

    VkCommandBufferBeginInfo beginInfo = {};
    beginInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
    beginInfo.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
	
    vkBeginCommandBuffer(context.DrawCommandBuffer, &beginInfo);

    VkImageMemoryBarrier layoutTransitionBarrier = {};
    layoutTransitionBarrier.sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
    layoutTransitionBarrier.srcAccessMask = VK_ACCESS_MEMORY_READ_BIT;
    layoutTransitionBarrier.dstAccessMask = VK_ACCESS_COLOR_ATTACHMENT_READ_BIT | VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
    layoutTransitionBarrier.oldLayout = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
    layoutTransitionBarrier.newLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    layoutTransitionBarrier.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    layoutTransitionBarrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    layoutTransitionBarrier.image = context.PresentImages[nextImageIndex];
    VkImageSubresourceRange resourceRange = { VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1 };
    layoutTransitionBarrier.subresourceRange = resourceRange;

    vkCmdPipelineBarrier(context.DrawCommandBuffer, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, 
        VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, 0, 0, NULL, 0, NULL, 1, &layoutTransitionBarrier);

    // Activate the render pass and connect framebuffers
    VkClearValue clearValue[] = { { 1.0f, 1.0f, 1.0f, 1.0f }, { 1.0, 0.0 } };
    VkRenderPassBeginInfo renderPassBeginInfo = {};
    renderPassBeginInfo.sType = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
    renderPassBeginInfo.renderPass = context.RenderPass;
    renderPassBeginInfo.framebuffer = context.FrameBuffers[nextImageIndex];
    renderPassBeginInfo.renderArea = { 0, 0, context.Width, context.Height };
    renderPassBeginInfo.clearValueCount = 2;
    renderPassBeginInfo.pClearValues = clearValue;

    vkCmdBeginRenderPass(context.DrawCommandBuffer, &renderPassBeginInfo, VK_SUBPASS_CONTENTS_INLINE);

    // Bind the graphics pipeline which holds all rendering states
    vkCmdBindPipeline(context.DrawCommandBuffer, VK_PIPELINE_BIND_POINT_GRAPHICS, context.Pipeline);

    // Handle the dynamic states (window might have been resized since last frame)
    VkViewport viewport = { 0, 0, context.Width, context.Height, 0, 1 };
    vkCmdSetViewport(context.DrawCommandBuffer, 0, 1, &viewport);

    VkRect2D scissor = { 0, 0, context.Width, context.Height };
    vkCmdSetScissor(context.DrawCommandBuffer, 0, 1, &scissor);

    // Draw the triangle by binding the vertex buffer and issuing a draw call
    VkDeviceSize offsets = {};
    vkCmdBindVertexBuffers(context.DrawCommandBuffer, 0, 1, &context.VertexInputBuffer, &offsets);
    u32 vertexCount = 3;
    u32 instanceCount = 1;
    vkCmdDraw(context.DrawCommandBuffer, vertexCount, instanceCount, 0, 0);

    vkCmdEndRenderPass(context.DrawCommandBuffer);

    // Render pass is done but now we need to prepare the image to be presented by changing the layout again
    VkImageMemoryBarrier prePresentBarrier = {};
    prePresentBarrier.sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
    prePresentBarrier.srcAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
    prePresentBarrier.dstAccessMask = VK_ACCESS_MEMORY_READ_BIT;
    prePresentBarrier.oldLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    prePresentBarrier.newLayout = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
    prePresentBarrier.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    prePresentBarrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    prePresentBarrier.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
    prePresentBarrier.image = context.PresentImages[nextImageIndex];

    vkCmdPipelineBarrier(context.DrawCommandBuffer, VK_PIPELINE_STAGE_ALL_COMMANDS_BIT, 
        VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT, 0, 0, NULL, 0, NULL, 1, &prePresentBarrier);

    vkEndCommandBuffer(context.DrawCommandBuffer);

    VkFence renderFence;
    VkFenceCreateInfo fenceCreateInfo = {};

    fenceCreateInfo.sType = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO;
    vkCreateFence(context.Device, &fenceCreateInfo, NULL, &renderFence);

    VkPipelineStageFlags waitStageMash = { VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT };
    VkSubmitInfo submitInfo = {};
    submitInfo.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
    submitInfo.waitSemaphoreCount = 1;
    submitInfo.pWaitSemaphores = &presentCompleteSemaphore;
    submitInfo.pWaitDstStageMask = &waitStageMash;
    submitInfo.commandBufferCount = 1;
    submitInfo.pCommandBuffers = &context.DrawCommandBuffer;
    submitInfo.signalSemaphoreCount = 1;
    submitInfo.pSignalSemaphores = &renderCompleteSemaphore;
    vkQueueSubmit(context.PresentQueue, 1, &submitInfo, renderFence);

    vkWaitForFences(context.Device, 1, &renderFence, VK_TRUE, UINT64_MAX);
    vkDestroyFence(context.Device, renderFence, NULL);

    VkPresentInfoKHR presentInfo = {};
    presentInfo.sType = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
    presentInfo.pNext = NULL;
    presentInfo.waitSemaphoreCount = 1;
    presentInfo.pWaitSemaphores = &renderCompleteSemaphore;
    presentInfo.swapchainCount = 1;
    presentInfo.pSwapchains = &context.SwapChain;
    presentInfo.pImageIndices = &nextImageIndex;
    presentInfo.pResults = NULL;

    vkQueuePresentKHR(context.PresentQueue, &presentInfo);

    vkDestroySemaphore(context.Device, presentCompleteSemaphore, NULL);
    vkDestroySemaphore(context.Device, renderCompleteSemaphore, NULL);
}

LRESULT CALLBACK WindowProc(HWND window, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message) 
    {
        case WM_CLOSE:
        {
            PostQuitMessage(0);
        } break;

        default:
        {
            
        } break;
    }

    return DefWindowProc(window, message, wParam, lParam);
}
   
s32 CALLBACK WinMain(
    HINSTANCE hInstance, 
    HINSTANCE hPrevInstance, 
    LPSTR commandLine, 
    s32 showCode)
{
    WNDCLASSEX windowClass = {};
    windowClass.cbSize = sizeof(WNDCLASSEX);
    windowClass.style = CS_HREDRAW | CS_VREDRAW | CS_OWNDC;
    windowClass.lpfnWndProc = WindowProc;
    windowClass.hInstance = hInstance;
    windowClass.lpszClassName = "FarNorthWindowClass";

    RegisterClassEx(&windowClass);  

	context.Width = 800;
	context.Height = 600;

    const char* applicationName = "Far North Engine v0.01";

    HWND window = CreateWindowEx( NULL, "FarNorthWindowClass", applicationName,
                                        WS_OVERLAPPEDWINDOW | WS_VISIBLE,
                                        100, 
                                        100, 
			                            context.Width,
			                            context.Height,
                                        NULL,
                                        NULL,
                                        hInstance,
                                        NULL );

    if (window) 
    {
        Win32LoadVulkan();
        InitVulkan(hInstance, window, applicationName);

        applicationRunning = true;
        
        while (applicationRunning) 
        {
            MSG message; 

            while (PeekMessage(&message, 0, 0, 0, PM_REMOVE))
            {
                if (message.message == WM_QUIT) 
                {
                    applicationRunning = false;
                } 
                else 
                {
                    TranslateMessage(&message);
                    DispatchMessageA(&message);
                }
            }

            Render();

            RedrawWindow(window, NULL, NULL, RDW_INTERNALPAINT);
        }

        vkDestroyDebugReportCallbackEXT(context.Instance, context.Callback, NULL);
    }    

    return 0;
}