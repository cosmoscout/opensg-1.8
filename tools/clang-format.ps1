# ------------------------------------------------------------------------------------------------ #
#                                  This file is part of OpenSG 1.8                                 #
# ------------------------------------------------------------------------------------------------ #
<#
    .SYNOPSIS
    This function runs clang-format on all source files.

    .DESCRIPTION
    This function runs clang-format on all source files.
#>

$baseDir = "$PSScriptRoot/../OSGBase"
$systemDir = "$PSScriptRoot/../OSGSystem"
$windowDir = "$PSScriptRoot/../OSGWindowGLUT"
$testDir = "$PSScriptRoot/../Test"

$fileEndings = @('*.cpp', '*.hpp', '*.h', '*.inl')

$itemsToCheck = Get-ChildItem -Path $baseDir, $systemDir, $windowDir, $testDir -Recurse -Include $fileEndings

try {
    # If we have a recent PowerShell version we can run clang-format in parallel
    # which is much faster. But we still need to support PowerShell version 5.
    $parallelSupported = $PSVersionTable.PSVersion.Major -ge 7
    if ($parallelSupported) {
        $itemsToCheck | ForEach-Object -Parallel {
            $file = $_
            Write-Output "Formatting $file ..."
            clang-format -i "$file"
        }
    } else {
        $itemsToCheck | ForEach-Object {
            $file = $_
            Write-Output "Formatting $file ..."
            clang-format -i "$file"
        }
    }
} catch {
    throw $_
}