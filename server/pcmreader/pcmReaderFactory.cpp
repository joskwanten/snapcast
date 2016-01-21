/***
    This file is part of snapcast
    Copyright (C) 2015  Johannes Pohl

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
***/

#include "common/utils.h"
#include "pcmReaderFactory.h"
#include "pipeReader.h"


using namespace std;


PcmReader* PcmReaderFactory::createPcmReader(const std::string& uri) const
{
	PcmReader* pcmReader = NULL;
/*
	std::string codec(codecSettings);
	std::string codecOptions;
	if (codec.find(":") != std::string::npos)
	{
		codecOptions = trim_copy(codec.substr(codec.find(":") + 1));
		codec = trim_copy(codec.substr(0, codec.find(":")));
	}
	if (codec == "ogg")
		encoder = new OggEncoder(codecOptions);
	else if (codec == "pcm")
		encoder = new PcmEncoder(codecOptions);
	else if (codec == "flac")
		encoder = new FlacEncoder(codecOptions);
	else
	{
		cout << "unknown codec: " << codec << "\n";
		return NULL;
	}
*/
	return pcmReader;
}


