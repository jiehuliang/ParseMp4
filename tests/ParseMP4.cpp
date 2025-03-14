#include "Util/File.h"
#include "MP4/FileBox.h"
#include <iostream>

int main(int argc, char* argv[]) {
	std::string filedata = File::loadFile("test.mp4");
	FileBox::Ptr root= std::make_shared<FileBox>();
	MP4Buffer::Ptr stream = std::make_shared<MP4Buffer>();
	stream->Append(filedata);
	root->Parse(stream);
	auto mp4Str = root->dumpStr();
	std::cout << mp4Str;
	return 0;
}
