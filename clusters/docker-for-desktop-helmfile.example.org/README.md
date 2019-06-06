# clusters / docker-for-desktop-helmfile.example.org

## EXPERIMENTAL

This experimental directory is meant to have feature-parity with `clusters/docker-for-desktop.example.org`, with the only difference being that [helmfile](https://github.com/roboll/helmfile) is used instead of [mh](https://github.com/cisco-sso/mh).

## Usage

After cloning this repo...

### Optional: Use pipenv to get basic tools like yq and pyrealpath.
```
cd framework-deploy
pipenv shell
pipenv install
```

**NOTE:** Using pipenv may cause direnv to not auto-detect an `.envrc` file. If you find this happens to you, just do `source .envrc` inside the pipenv shell before continuing to the next step.

### Use helmfile to deploy helm charts.

```
## Enter this directory.
cd clusters/docker-for-desktop-helmfile.example.org

## run one of these:
direnv allow
source .envrc

## run all of these:
make helm
make helmfile 
```

## Service Discovery

To browse ingress endpoints on your machine, you should add the following host
records to the correct `hosts` file for your operating system.

- MacOS: `/etc/hosts`.
- Windows: `C:\Windows\System32\Drivers\etc\hosts`.

```
127.0.0.1 prometheus.docker-for-desktop-helmfile.example.org
127.0.0.1 grafana.docker-for-desktop-helmfile.example.org
127.0.0.1 kibana.docker-for-desktop-helmfile.example.org
127.0.0.1 alertmanager.docker-for-desktop-helmfile.example.org
127.0.0.1 pushgateway.docker-for-desktop-helmfile.example.org
127.0.0.1 prometheus.docker-for-desktop-helmfile.example.org
```
