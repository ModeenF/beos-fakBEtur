
#ifndef _DIALIMPORT_H
#define _DIALIMPORT_H

#include <Window.h>
#include <sqlite.h>

class pozfaklist;
class BButton;
class BHandler;
class BMessage;
class BView;
class ColumnListView;

class dialImport : public BWindow {
	public:
		dialImport(sqlite *db, int aktualna, pozfaklist *faklista, BHandler *hr);
		virtual ~dialImport();
		virtual void MessageReceived(BMessage *Message);

	private:
		bool commit(void);

		BHandler *handler;
		BView *view;
		BButton *but_import;
		ColumnListView *list;

		pozfaklist *flist;

		sqlite *dbData;
		char *dbErrMsg;
};

#endif
