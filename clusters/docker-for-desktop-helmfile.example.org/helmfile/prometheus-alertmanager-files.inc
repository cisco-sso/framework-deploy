alertmanagerFiles:
  alertmanager.yml:
    global: null
    receivers:
    - name: email-team-core
    - name: email-team-dev
    route:
      continue: false
      group_by:
      - alertname
      group_interval: 5m
      group_wait: 5m
      receiver: email-team-dev
      repeat_interval: 8h
      routes:
      - match_re:
          alertname: ^(K8S.+|Kube.+Overcommit|KubeQuota.+|KubePersist.+|KubeNode.+|KubeVersion.+|KubeClient.+|Elasticsearch.+|Node.+Usage)$
        receiver: email-team-core
      - match_re:
          cronjob: .*(docker-for-desktop-helmfile.example.org).*
        receiver: email-team-dev
      - match_re:
          daemonset: .*(docker-for-desktop-helmfile.example.org).*
        receiver: email-team-dev
      - match_re:
          deployment: .*(docker-for-desktop-helmfile.example.org).*
        receiver: email-team-dev
      - match_re:
          endpoint: .*(docker-for-desktop-helmfile.example.org).*
        receiver: email-team-dev
      - match_re:
          job: .*(docker-for-desktop-helmfile.example.org).*
        receiver: email-team-dev
      - match_re:
          persistentvolume: .*(docker-for-desktop-helmfile.example.org).*
        receiver: email-team-dev
      - match_re:
          persistentvolumeclaim: .*(docker-for-desktop-helmfile.example.org).*
        receiver: email-team-dev
      - match_re:
          pod: .*(docker-for-desktop-helmfile.example.org).*
        receiver: email-team-dev
      - match_re:
          service: .*(docker-for-desktop-helmfile.example.org).*
        receiver: email-team-dev
      - match_re:
          statefulset: .*(docker-for-desktop-helmfile.example.org).*
        receiver: email-team-dev
      - match_re:
          cronjob: .*(cert-manager|chaoskube|cluster-autoscaler|consul|dashboard|docker-registry|elasticsearch|external-dns|filebeat|fluentd-elasticsearch|grafana|kafka|kibana|logstash|minio|nginx-ingress|oauth2-proxy|prometheus|stolon|vault|zookeeper).*
        receiver: email-team-core
      - match_re:
          daemonset: .*(cert-manager|chaoskube|cluster-autoscaler|consul|dashboard|docker-registry|elasticsearch|external-dns|filebeat|fluentd-elasticsearch|grafana|kafka|kibana|logstash|minio|nginx-ingress|oauth2-proxy|prometheus|stolon|vault|zookeeper).*
        receiver: email-team-core
      - match_re:
          deployment: .*(cert-manager|chaoskube|cluster-autoscaler|consul|dashboard|docker-registry|elasticsearch|external-dns|filebeat|fluentd-elasticsearch|grafana|kafka|kibana|logstash|minio|nginx-ingress|oauth2-proxy|prometheus|stolon|vault|zookeeper).*
        receiver: email-team-core
      - match_re:
          endpoint: .*(cert-manager|chaoskube|cluster-autoscaler|consul|dashboard|docker-registry|elasticsearch|external-dns|filebeat|fluentd-elasticsearch|grafana|kafka|kibana|logstash|minio|nginx-ingress|oauth2-proxy|prometheus|stolon|vault|zookeeper).*
        receiver: email-team-core
      - match_re:
          job: .*(cert-manager|chaoskube|cluster-autoscaler|consul|dashboard|docker-registry|elasticsearch|external-dns|filebeat|fluentd-elasticsearch|grafana|kafka|kibana|logstash|minio|nginx-ingress|oauth2-proxy|prometheus|stolon|vault|zookeeper).*
        receiver: email-team-core
      - match_re:
          persistentvolume: .*(cert-manager|chaoskube|cluster-autoscaler|consul|dashboard|docker-registry|elasticsearch|external-dns|filebeat|fluentd-elasticsearch|grafana|kafka|kibana|logstash|minio|nginx-ingress|oauth2-proxy|prometheus|stolon|vault|zookeeper).*
        receiver: email-team-core
      - match_re:
          persistentvolumeclaim: .*(cert-manager|chaoskube|cluster-autoscaler|consul|dashboard|docker-registry|elasticsearch|external-dns|filebeat|fluentd-elasticsearch|grafana|kafka|kibana|logstash|minio|nginx-ingress|oauth2-proxy|prometheus|stolon|vault|zookeeper).*
        receiver: email-team-core
      - match_re:
          pod: .*(cert-manager|chaoskube|cluster-autoscaler|consul|dashboard|docker-registry|elasticsearch|external-dns|filebeat|fluentd-elasticsearch|grafana|kafka|kibana|logstash|minio|nginx-ingress|oauth2-proxy|prometheus|stolon|vault|zookeeper).*
        receiver: email-team-core
      - match_re:
          service: .*(cert-manager|chaoskube|cluster-autoscaler|consul|dashboard|docker-registry|elasticsearch|external-dns|filebeat|fluentd-elasticsearch|grafana|kafka|kibana|logstash|minio|nginx-ingress|oauth2-proxy|prometheus|stolon|vault|zookeeper).*
        receiver: email-team-core
      - match_re:
          statefulset: .*(cert-manager|chaoskube|cluster-autoscaler|consul|dashboard|docker-registry|elasticsearch|external-dns|filebeat|fluentd-elasticsearch|grafana|kafka|kibana|logstash|minio|nginx-ingress|oauth2-proxy|prometheus|stolon|vault|zookeeper).*
        receiver: email-team-core

