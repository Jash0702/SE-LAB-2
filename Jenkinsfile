// Author: Jashwanth Sandra
// ID: SE22UARI060

pipeline {
    agent {
        label 'Docker_agent'  // Change this to your actual Docker agent label if different
    }
    triggers {
        pollSCM('* * * * *') // Poll SCM every minute
    }
    stages {
        stage('Build') {
            steps {
                echo 'Building...'
                sh '''
                    echo "Building from Jenkinsfile"
                    echo "Jashwanth Sandra ID: SE22UARI060"
                '''
            }
        }
        stage('Test') {
            steps {
                echo 'Testing...'
                sh '''
                    echo "Testing the build triggered from Jenkinsfile."
                    echo "Jashwanth Sandra ID: SE22UARI060"
                '''
            }
        }
        stage('Deliver') {
            steps {
                echo 'Delivering...'
                sh '''
                    echo "Doing delivery stuff..."
                    echo "Jaswanth Sandra ID: SE22UARI060"
                '''
            }
        }
    }
}
