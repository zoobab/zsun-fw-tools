#include <unistd.h>
#include <linux/reboot.h>

int main(int argc, char *argv[])
{
    reboot(LINUX_REBOOT_MAGIC1, LINUX_REBOOT_MAGIC2, LINUX_REBOOT_CMD_RESTART, NULL);
    return 0;
}
