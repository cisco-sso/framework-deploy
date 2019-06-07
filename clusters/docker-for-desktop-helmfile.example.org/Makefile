SHELL := bash

.PHONY: all
all: helm helmfile

.PHONY: helm
helm:
	helm init --client-only
	helm plugin install https://github.com/databus23/helm-diff
	helm plugin install https://github.com/rimusz/helm-tiller

.PHONY: helmfile
helmfile:
	. .envrc && helm tiller start-ci common
	. .envrc && helmfile sync
