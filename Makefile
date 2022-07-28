
cpp:
	echo "cpp" > .mode

run:
	./shell/run.sh

runapplet:
	javaws shell/ContestAppletProd7.2.jnlp > /dev/null 2>&1 &

# run with input
runwi:
	./shell/runwi.sh

base:
	./shell/base.sh

m:
	./shell/movefile.sh

mc:
	./shell/movefilecontest.sh

entr:
	./shell/entr.sh

d:
	./shell/download.sh

du:
	./shell/downloadurl.sh

t:
	./shell/test.sh

s:
	./shell/submit.sh

su:
	./shell/submiturl.sh

